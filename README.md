# Setup

1. Install mingw64 and extract it anywhere (I use `C:\mingw64`)
2. Add `C:\mingw64\bin` to your path
3. Install SDL2 dev libraries for mingw, extract anywhere (I used `C:\SDL2-w64`)
4. Clone this repository
5. Add the following directories: `bin/debug` and `bin/objects`
6. Add SDL2.dll to `bin/debug` (you can find it in `C:\SDL2-w64\bin`)
7. Open `project.code-workspace` in VSCode
8. Install Microsoft's C++ extension

Everything should be setup and Ctrl+Shift+B should build the project, and Ctrl+Shift+D should run it and display a blank window.
