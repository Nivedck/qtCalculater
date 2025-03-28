

# QtCalculator 🖩

A simple calculator application built using **Qt (C++)**. This application performs basic arithmetic operations:  
➕ Addition  
➖ Subtraction  
✖️ Multiplication  
➗ Division (with zero-division handling)  

## Screenshot
![Calculator Screenshot](screenshot.png)

## 🚀 Features  
- **Basic arithmetic operations** (Addition, Subtraction, Multiplication, Division)  
- **Error handling** for division by zero  
- **User-friendly interface** using Qt Widgets
  

## 🛠️ Installation & Setup  
### **1. Install Qt and Qt Creator**

On **Arch Linux (Garuda, Manjaro, etc.)**, install Qt and Qt Creator using:  
```sh
sudo pacman -S qt5 qt5-base qtcreator
```


On **Ubuntu/Debian-based distros**:  
```sh
sudo apt install qtbase5-dev qtcreator
```


### **2. Clone the Repository**  
```sh
git clone https://github.com/Nivedck/QtCalculator.git
cd QtCalculator
```


### **3. Open and Build in Qt Creator**  
1. Open `Qt Creator`.  
2. Click **"Open Project"** and select `QtCalculator.pro`.  
3. Click **Run (▶️)** to build and launch the calculator.  

---

## 📄 Code Structure  
```
QtCalculator/
│── main.cpp          # Application entry point
│── mainwindow.h      # Header file for main window
│── mainwindow.cpp    # Implementation of calculator logic
│── mainwindow.ui     # UI design file (Qt Designer)
│── QtCalculator.pro  # Qt project configuration file
```

---

## 📝 To-Do  
- [ ] Improve UI with modern design  
- [ ] Add more advanced operations (percentage, square root, etc.)  
- [ ] Implement a history log feature  

---

## 🤝 Contributing  
Pull requests are welcome! If you find issues, feel free to open an **Issue** or suggest improvements.  

---

## 📜 License  
This project is open-source under the **MIT License**.  

---

🚀 **Happy Coding with Qt!** 🎯  
