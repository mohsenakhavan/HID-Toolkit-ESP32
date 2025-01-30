
<div align="center">
  <img src="https://img.shields.io/badge/ESP32--S3-HID_Toolbox-blue?logo=arduino&style=for-the-badge" alt="Project Logo">
  <h1>✨ HID Toolkit for ESP32-S3 ✨<br>ابزارک‌های HID برای ESP32-S3</h1>
</div>

---

## 🚀 **Project Overview | معرفی پروژه**  
**English**:  
This repository contains a collection of **HID (Human Interface Device) payloads** for the ESP32-S3 microcontroller, designed to simulate keyboard inputs for automating Windows tasks. Paired with a Python GUI, it simplifies managing and deploying these payloads.  

**فارسی**:  
این ریپازیتوری شامل مجموعه‌ای از **پیلودهای HID** برای میکروکنترلر ESP32-S3 است که برای شبیه‌سازی ورودی‌های کیبورد و خودکارسازی کارها در ویندوز طراحی شده‌اند. یک رابط گرافیکی پایتون نیز برای مدیریت آسان این پیلودها توسعه داده شده است.

---

## 🔥 **Key Features | ویژگی‌های کلیدی**  
- **30+ Creative HID Payloads** (e.g., shutdown, BSOD, Rickroll, WiFi password extraction)  
- **Cross-Platform Python GUI** (Tkinter-based)  
- **Plug-and-Play Arduino Sketches**  
- **Ethical Hacking & Automation Toolkit**  

---

## 📂 **Repository Structure | ساختار ریپازیتوری**  
```
HID-Toolkit-ESP32/  
├── sketches/                  # Arduino sketches for payloads
│   ├── shutdown_windows.ino  
│   ├── rickroll.ino  
│   └── ...  
├── HID_Sketch_Loader.py       # Main Python GUI application  
├── README.md  
└── requirements.txt  
```

---

## ⚙️ **Setup & Usage | راه‌اندازی و استفاده**  

### **Hardware Requirements | سخت‌افزار مورد نیاز**  
- ESP32-S3 Development Board  
- USB Cable  

### **Software Setup | نصب نرم‌افزار**  
1. Install [Arduino IDE](https://www.arduino.cc/)  
2. Install ESP32-S3 Board Support:  
   ```arduino
   Boards Manager URL: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
   ```  
3. Install Python Libraries:  
   ```bash
   pip install tkinter
   ```

### **Deploying Payloads | اجرای پیلودها**  
1. Open `HID_Sketch_Loader.py` to select and upload sketches:  
   ```bash
   python HID_Sketch_Loader.py
   ```  
2. Connect ESP32-S3 and upload selected sketch via Arduino IDE.  

---

## 🖥️ **GUI Preview | پیشنمایش رابط گرافیکی**  
<div align="center">
  <img src="https://github.com/user-attachments/assets/f420f6a7-25f7-4785-9d44-98d9d81f9743" width="500" alt="GUI Screenshot">
</div>  

---

## ⚠️ **Ethical Note | نکته اخلاقی**  
**Use this tool responsibly!**  
**این ابزار صرفاً برای اهداف آموزشی و امنیتی است.**  

---

## 🤝 **Contribution | مشارکت**  
Submit pull requests or issues to:  
[mohsenakhavan/HID-Toolkit-ESP32](https://github.com/mohsenakhavan/HID-Toolkit-ESP32)  

---

## 📜 **License | مجوز**  
MIT License - See [LICENSE](LICENSE)  

---

<div align="center">
  <br>
  <a href="https://github.com/mohsenakhavan">
    <img src="https://img.shields.io/badge/GitHub-Profile-blue?style=for-the-badge&logo=github" alt="GitHub Profile">
  </a>
</div>

---
