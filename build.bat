REM Automatically generated from Makefile

set "BUILD_DIR=..\build\"

echo Checking directory: "%BUILD_DIR%"

if exist "%BUILD_DIR%" (
    echo Directory exists.
    cd gb-maker-project\src
    lcc -o ..\build\mega_example.gb main.c

) else (
    echo Directory does not exist, creating...
    mkdir "%BUILD_DIR%"
)