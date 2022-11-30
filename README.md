# RIGISIM
### A Rigidbody simulator to create everything you can think of.

##### *insert screenshot*

---

## What is this?
This is a rigidbody simulator using AngeTheGreat's physics engine. You can create bascially everything with this.

## How to install it?
### Method 1. Download ready-to-use build
- Step 1. Go to the Releases page
- Step 2. Download the latest release
- Step 3. Unpack the `.zip` file.
- Step 4. Run the simulator: `bin/rigisim.exe`.

### Method 2. (IGNORE IF YOU ARE NOT A DEVELOPER!) Build it yourself
- Step 1. Install necessary dependencies  
This project uses the CMake project system. To build the project you will need it installed. The other dependencies are:
```
SDL2
SDL2_image
Boost (make sure to build the optional dependencies)
```

- Step 2. Clone  
Use this command to clone the project:
```
git clone --recurse-submodules https://github.com/DDev247/rigi-sim.git
```

- Step 3. Configure project  
You can use the Visual Studio Code presets or do it manually:
```
mkdir build
cd build
cmake ..
```

- Step 4.1. Compile (Debug)  
Use the Visual Studio Code presets for debug or use this command:
```
cmake --build . --config RelWithDebInfo --parallel 2
```

- Step 4.2. Compile (Release)
Use the Visual Studio Code presets for release or use this command:
```
cmake --build . --config Release --parallel 2
```
