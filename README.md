# README #

### Clone the project ###
```
git clone git@github.com:kaushikbaidya09/lvgl-linux-UI.git
cd lvgl-linux-UI
git submodule update --init --recursive
```

### Build and Run the project ###
```
cmake -B build . && cmake --build build -j
cd build && make run
```