import tkinter as tk
from tkinter import filedialog
import os
import platform

class ArduinoSketchLoader:
    def __init__(self, master):
        self.master = master
        self.sketch_folder = "sketches"  # پوشه پیشفرض برای اسکچها
        self.arduino_path = self.find_arduino_ide()
        
        # ایجاد اجزای رابط کاربری
        self.frame = tk.Frame(master)
        self.frame.pack(padx=10, pady=10)
        
        self.lbl = tk.Label(self.frame, text="اسکچهای موجود:")
        self.lbl.pack(anchor='w')
        
        self.listbox = tk.Listbox(self.frame, width=50, height=15)
        self.listbox.pack(pady=5)
        
        self.btn_frame = tk.Frame(self.frame)
        self.btn_frame.pack(pady=5)
        
        self.open_btn = tk.Button(self.btn_frame, text="باز کردن در Arduino IDE", command=self.open_sketch)
        self.open_btn.pack(side='left', padx=5)
        
        self.refresh_btn = tk.Button(self.btn_frame, text="بروزرسانی لیست", command=self.populate_list)
        self.refresh_btn.pack(side='left', padx=5)
        
        # پر کردن لیست با فایلهای INO
        self.populate_list()

    def find_arduino_ide(self):
        # جستجوی خودکار مسیر Arduino IDE (ویندوز/مک/لینوکس)
        system = platform.system()
        default_paths = {
            'Windows': r"C:\Program Files (x86)\Arduino\arduino.exe",
            'Darwin': "/Applications/Arduino.app/Contents/MacOS/Arduino",
            'Linux': "/usr/bin/arduino"
        }
        return default_paths.get(system, None)

    def populate_list(self):
        self.listbox.delete(0, tk.END)
        if not os.path.exists(self.sketch_folder):
            os.makedirs(self.sketch_folder)
            
        for file in os.listdir(self.sketch_folder):
            if file.endswith(".ino"):
                self.listbox.insert(tk.END, file)

    def open_sketch(self):
        selected = self.listbox.curselection()
        if not selected:
            return
            
        file_name = self.listbox.get(selected[0])
        full_path = os.path.abspath(os.path.join(self.sketch_folder, file_name))
        
        # باز کردن فایل با Arduino IDE
        if self.arduino_path and os.path.exists(self.arduino_path):
            os.system(f'"{self.arduino_path}" "{full_path}"')
        else:
            # استفاده از روش پیشفرض سیستم
            if platform.system() == 'Darwin':
                os.system(f'open "{full_path}"')
            elif platform.system() == 'Windows':
                os.startfile(full_path)
            else:
                os.system(f'xdg-open "{full_path}"')

if __name__ == "__main__":
    root = tk.Tk()
    root.title("Arduino Sketch Loader - ESP32-S3")
    app = ArduinoSketchLoader(root)
    root.mainloop()