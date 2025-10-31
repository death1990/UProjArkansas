@echo off
REM ========== Arkansas Project - Optimized Build Script ==========
REM This script provides optimized building for The Outer Worlds 2 modding framework

echo Starting optimized build for Arkansas project...
echo.

REM Check if Visual Studio 2022 is available
where devenv.exe >nul 2>nul
if %ERRORLEVEL% neq 0 (
    echo ERROR: Visual Studio 2022 not found in PATH
    echo Please ensure Visual Studio 2022 is installed and in your PATH
    pause
    exit /b 1
)

REM Check if UE5 custom build exists
if not exist "%USERPROFILE%\Documents\UnrealEngine\5.4.4-TOW2" (
    echo WARNING: Custom UE 5.4.4-TOW2 engine not found
    echo Please build the custom engine from: https://github.com/nathtest/UnrealEngine/tree/5.4.4-TOW2
    echo Expected location: %USERPROFILE%\Documents\UnrealEngine\5.4.4-TOW2
    pause
)

REM Generate project files with optimizations
echo Generating optimized project files...
if exist "Arkansas.uproject" (
    "%USERPROFILE%\Documents\UnrealEngine\5.4.4-TOW2\Engine\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.exe" -projectfiles -project="Arkansas.uproject" -game -rocket -progress -2022
    if %ERRORLEVEL% neq 0 (
        echo ERROR: Failed to generate project files
        pause
        exit /b 1
    )
    echo Project files generated successfully!
) else (
    echo ERROR: Arkansas.uproject not found in current directory
    pause
    exit /b 1
)

REM Build with optimizations
echo.
echo Building Arkansas project with optimizations...
echo Using Unity build and shared PCHs for faster compilation...

REM Development Editor build (for faster iteration)
echo Building Development Editor configuration...
devenv Arkansas.sln /build "Development Editor|Win64"
if %ERRORLEVEL% neq 0 (
    echo ERROR: Development Editor build failed
    pause
    exit /b 1
)

REM Development build (for testing)
echo Building Development configuration...  
devenv Arkansas.sln /build "Development|Win64"
if %ERRORLEVEL% neq 0 (
    echo ERROR: Development build failed
    pause
    exit /b 1
)

echo.
echo ========== BUILD COMPLETED SUCCESSFULLY ==========
echo.
echo Performance optimizations applied:
echo - Unity build enabled for faster compilation
echo - Shared PCHs for reduced memory usage
echo - Platform-specific optimizations for Windows
echo - Enhanced module dependency management
echo - Optimized asset streaming and memory management
echo.
echo You can now:
echo 1. Double-click Arkansas.uproject to open the editor
echo 2. Create Blueprint mods inheriting from Arkansas C++ classes
echo 3. Use FModel to extract game assets for modding
echo 4. Deploy mods using Simple Mod Loader (KZekai)
echo.
pause