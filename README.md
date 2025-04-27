# CherryPink App Template
This template is a minimal configuration for getting started with the [CherryPink engine](https://github.com/ShizukanaYaseotoko/cherrypink-lib).

# Building
Clone the repository recursively:
```sh
git clone --recursive https://github.com/ShizukanaYaseotoko/cherrypink-app-template
```
You can adjust the name of your project and other settings in the premake5.lua file.

## Linux
For GNU Make, run the following:
```sh
./premake5 gmake
cd build
make -j # or make -j config=release to build in Release mode
```

The compiled files will be in build/bin/Debug, or build/bin/Release, depending on the configuration.

## Windows (Visual Studio)
```
./premake5.exe vs2022 # or any other Visual Studio version
```
Open the solution file generated in the build folder, and just build or run the project.

If you did everything right, you should see a black window open.
