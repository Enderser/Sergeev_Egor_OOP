# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ender/OOP/task0b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ender/OOP/build-task0b-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/task0b.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/task0b.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/task0b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task0b.dir/flags.make

CMakeFiles/task0b.dir/main.cpp.o: CMakeFiles/task0b.dir/flags.make
CMakeFiles/task0b.dir/main.cpp.o: /home/ender/OOP/task0b/main.cpp
CMakeFiles/task0b.dir/main.cpp.o: CMakeFiles/task0b.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ender/OOP/build-task0b-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task0b.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task0b.dir/main.cpp.o -MF CMakeFiles/task0b.dir/main.cpp.o.d -o CMakeFiles/task0b.dir/main.cpp.o -c /home/ender/OOP/task0b/main.cpp

CMakeFiles/task0b.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task0b.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ender/OOP/task0b/main.cpp > CMakeFiles/task0b.dir/main.cpp.i

CMakeFiles/task0b.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task0b.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ender/OOP/task0b/main.cpp -o CMakeFiles/task0b.dir/main.cpp.s

# Object files for target task0b
task0b_OBJECTS = \
"CMakeFiles/task0b.dir/main.cpp.o"

# External object files for target task0b
task0b_EXTERNAL_OBJECTS =

task0b: CMakeFiles/task0b.dir/main.cpp.o
task0b: CMakeFiles/task0b.dir/build.make
task0b: CMakeFiles/task0b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ender/OOP/build-task0b-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task0b"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task0b.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task0b.dir/build: task0b
.PHONY : CMakeFiles/task0b.dir/build

CMakeFiles/task0b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task0b.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task0b.dir/clean

CMakeFiles/task0b.dir/depend:
	cd /home/ender/OOP/build-task0b-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ender/OOP/task0b /home/ender/OOP/task0b /home/ender/OOP/build-task0b-Desktop-Debug /home/ender/OOP/build-task0b-Desktop-Debug /home/ender/OOP/build-task0b-Desktop-Debug/CMakeFiles/task0b.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task0b.dir/depend

