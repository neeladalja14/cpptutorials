# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\neela\AppData\Local\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\neela\AppData\Local\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\neela\Desktop\cpptutorials

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\neela\Desktop\cpptutorials\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpptutorials.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpptutorials.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpptutorials.dir/flags.make

CMakeFiles/cpptutorials.dir/main.cpp.obj: CMakeFiles/cpptutorials.dir/flags.make
CMakeFiles/cpptutorials.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\neela\Desktop\cpptutorials\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpptutorials.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpptutorials.dir\main.cpp.obj -c C:\Users\neela\Desktop\cpptutorials\main.cpp

CMakeFiles/cpptutorials.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpptutorials.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\neela\Desktop\cpptutorials\main.cpp > CMakeFiles\cpptutorials.dir\main.cpp.i

CMakeFiles/cpptutorials.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpptutorials.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\neela\Desktop\cpptutorials\main.cpp -o CMakeFiles\cpptutorials.dir\main.cpp.s

# Object files for target cpptutorials
cpptutorials_OBJECTS = \
"CMakeFiles/cpptutorials.dir/main.cpp.obj"

# External object files for target cpptutorials
cpptutorials_EXTERNAL_OBJECTS =

cpptutorials.exe: CMakeFiles/cpptutorials.dir/main.cpp.obj
cpptutorials.exe: CMakeFiles/cpptutorials.dir/build.make
cpptutorials.exe: CMakeFiles/cpptutorials.dir/linklibs.rsp
cpptutorials.exe: CMakeFiles/cpptutorials.dir/objects1.rsp
cpptutorials.exe: CMakeFiles/cpptutorials.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\neela\Desktop\cpptutorials\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpptutorials.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cpptutorials.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpptutorials.dir/build: cpptutorials.exe

.PHONY : CMakeFiles/cpptutorials.dir/build

CMakeFiles/cpptutorials.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cpptutorials.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cpptutorials.dir/clean

CMakeFiles/cpptutorials.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\neela\Desktop\cpptutorials C:\Users\neela\Desktop\cpptutorials C:\Users\neela\Desktop\cpptutorials\cmake-build-debug C:\Users\neela\Desktop\cpptutorials\cmake-build-debug C:\Users\neela\Desktop\cpptutorials\cmake-build-debug\CMakeFiles\cpptutorials.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpptutorials.dir/depend
