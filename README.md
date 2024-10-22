# README #

This repository serves as a base project template for LVGL (Light and Versatile Graphics Library) designed specifically for Linux applications. It provides a starting point to help you quickly kickstart LVGL-based UI development. With this template, developers can streamline the setup process and focus more on building rich, responsive, and visually appealing user interfaces for Linux environments.

### Install Packages ###
```
sudo apt install git libsdl2-dev cmake make
sudo apt update && sudo apt upgrade
```

### Clone the project ###
```
git clone git@github.com:kaushikbaidya09/lvgl-linux-UI.git
cd lvgl-linux-UI
git submodule update --init --recursive
```

### Build and Run the project ###
```
cd <this-project-path>
cmake -B build . && cmake --build build -j
cd build && make run
```
