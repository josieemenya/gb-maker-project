REM Automatically generated from Makefile

set "BUILD_DIR=..\build\"

echo Checking directory: "%BUILD_DIR%"

cd gb-maker-project

if not exist "build" (
    echo Directory does not exist, creating...
    mkdir "build"
) else (
    echo Directory exists.
)

cd src

lcc -c main.c -o main.rel
lcc -c ..\assets\tset_map.c -o tset_map.rel
lcc ..\assets\tset_map.c main.c  -o ..\build\mega_exwwample.gb -Wm-yc 
