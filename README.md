# README #

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
