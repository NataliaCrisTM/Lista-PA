# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\QT\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = D:\QT\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\PA\Lista\Q8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\PA\Lista\build-Q8-Desktop_Qt_5_15_2_MinGW_64_bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Q8.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Q8.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Q8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Q8.dir/flags.make

CMakeFiles/Q8.dir/main.c.obj: CMakeFiles/Q8.dir/flags.make
CMakeFiles/Q8.dir/main.c.obj: D:/PA/Lista/Q8/main.c
CMakeFiles/Q8.dir/main.c.obj: CMakeFiles/Q8.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\PA\Lista\build-Q8-Desktop_Qt_5_15_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Q8.dir/main.c.obj"
	D:\QT\Tools\mingw810_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Q8.dir/main.c.obj -MF CMakeFiles\Q8.dir\main.c.obj.d -o CMakeFiles\Q8.dir\main.c.obj -c D:\PA\Lista\Q8\main.c

CMakeFiles/Q8.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Q8.dir/main.c.i"
	D:\QT\Tools\mingw810_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\PA\Lista\Q8\main.c > CMakeFiles\Q8.dir\main.c.i

CMakeFiles/Q8.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Q8.dir/main.c.s"
	D:\QT\Tools\mingw810_64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\PA\Lista\Q8\main.c -o CMakeFiles\Q8.dir\main.c.s

# Object files for target Q8
Q8_OBJECTS = \
"CMakeFiles/Q8.dir/main.c.obj"

# External object files for target Q8
Q8_EXTERNAL_OBJECTS =

Q8.exe: CMakeFiles/Q8.dir/main.c.obj
Q8.exe: CMakeFiles/Q8.dir/build.make
Q8.exe: CMakeFiles/Q8.dir/linklibs.rsp
Q8.exe: CMakeFiles/Q8.dir/objects1.rsp
Q8.exe: CMakeFiles/Q8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\PA\Lista\build-Q8-Desktop_Qt_5_15_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Q8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Q8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Q8.dir/build: Q8.exe
.PHONY : CMakeFiles/Q8.dir/build

CMakeFiles/Q8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Q8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Q8.dir/clean

CMakeFiles/Q8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\PA\Lista\Q8 D:\PA\Lista\Q8 D:\PA\Lista\build-Q8-Desktop_Qt_5_15_2_MinGW_64_bit-Debug D:\PA\Lista\build-Q8-Desktop_Qt_5_15_2_MinGW_64_bit-Debug D:\PA\Lista\build-Q8-Desktop_Qt_5_15_2_MinGW_64_bit-Debug\CMakeFiles\Q8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Q8.dir/depend

