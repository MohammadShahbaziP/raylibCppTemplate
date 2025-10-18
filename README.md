# 🎮 cpp and raylib boilerplate

A modular C++ boilerplate for building games and graphics applications using [Raylib](https://www.raylib.com/).  
It uses a clean **App/Core** structure with CMake and is ready for Visual Studio or cross-platform builds.

---
## ⚙️ Building

### 🪟 Windows (Visual Studio)
1. Install [CMake](https://cmake.org/download/) and [Git](https://git-scm.com/downloads)
2. Open a terminal in the project root:
```bash
	cmake -B build -S .
	cmake --build build
```
Or open the folder directly in Visual Studio.

### 🐧 Linux / macOS
sudo apt install cmake git build-essential
```bash
	cmake -B build -S .
	cmake --build build
```

#### The Raylib library will be automatically downloaded and built into vendor/

---

## 🚀 Running the App
After a successful build, the binary will be located in:
build/App/App 