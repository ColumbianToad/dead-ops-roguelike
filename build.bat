@echo off
echo Compiling RogueArena...

C:\w64devkit\bin\g++.exe src\main.cpp -o RogueArena.exe ^
    -IC:\raylib\raylib\src ^
    -LC:\raylib\raylib\src ^
    -lraylib -lopengl32 -lgdi32 -lwinmm

echo.
echo Build finished. If there were any errors, they are shown above.
pause