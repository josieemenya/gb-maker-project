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

lcc ..\assets\tset_map.c main.c  -o ..\build\mega_exwwample.gb -Wm-yc 
