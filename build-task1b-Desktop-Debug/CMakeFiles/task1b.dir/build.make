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
CMAKE_SOURCE_DIR = /home/ender/OOP/task1b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ender/OOP/build-task1b-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/task1b.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/task1b.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/task1b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task1b.dir/flags.make

CMakeFiles/task1b.dir/main.cpp.o: CMakeFiles/task1b.dir/flags.make
CMakeFiles/task1b.dir/main.cpp.o: /home/ender/OOP/task1b/main.cpp
CMakeFiles/task1b.dir/main.cpp.o: CMakeFiles/task1b.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ender/OOP/build-task1b-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task1b.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task1b.dir/main.cpp.o -MF CMakeFiles/task1b.dir/main.cpp.o.d -o CMakeFiles/task1b.dir/main.cpp.o -c /home/ender/OOP/task1b/main.cpp

CMakeFiles/task1b.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task1b.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ender/OOP/task1b/main.cpp > CMakeFiles/task1b.dir/main.cpp.i

CMakeFiles/task1b.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task1b.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ender/OOP/task1b/main.cpp -o CMakeFiles/task1b.dir/main.cpp.s

CMakeFiles/task1b.dir/circular_buffer.cpp.o: CMakeFiles/task1b.dir/flags.make
CMakeFiles/task1b.dir/circular_buffer.cpp.o: /home/ender/OOP/task1b/circular_buffer.cpp
CMakeFiles/task1b.dir/circular_buffer.cpp.o: CMakeFiles/task1b.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ender/OOP/build-task1b-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/task1b.dir/circular_buffer.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task1b.dir/circular_buffer.cpp.o -MF CMakeFiles/task1b.dir/circular_buffer.cpp.o.d -o CMakeFiles/task1b.dir/circular_buffer.cpp.o -c /home/ender/OOP/task1b/circular_buffer.cpp

CMakeFiles/task1b.dir/circular_buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task1b.dir/circular_buffer.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ender/OOP/task1b/circular_buffer.cpp > CMakeFiles/task1b.dir/circular_buffer.cpp.i

CMakeFiles/task1b.dir/circular_buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task1b.dir/circular_buffer.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ender/OOP/task1b/circular_buffer.cpp -o CMakeFiles/task1b.dir/circular_buffer.cpp.s

# Object files for target task1b
task1b_OBJECTS = \
"CMakeFiles/task1b.dir/main.cpp.o" \
"CMakeFiles/task1b.dir/circular_buffer.cpp.o"

# External object files for target task1b
task1b_EXTERNAL_OBJECTS =

task1b: CMakeFiles/task1b.dir/main.cpp.o
task1b: CMakeFiles/task1b.dir/circular_buffer.cpp.o
task1b: CMakeFiles/task1b.dir/build.make
task1b: CMakeFiles/task1b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ender/OOP/build-task1b-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable task1b"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task1b.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task1b.dir/build: task1b
.PHONY : CMakeFiles/task1b.dir/build

CMakeFiles/task1b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task1b.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task1b.dir/clean

CMakeFiles/task1b.dir/depend:
	cd /home/ender/OOP/build-task1b-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ender/OOP/task1b /home/ender/OOP/task1b /home/ender/OOP/build-task1b-Desktop-Debug /home/ender/OOP/build-task1b-Desktop-Debug /home/ender/OOP/build-task1b-Desktop-Debug/CMakeFiles/task1b.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task1b.dir/depend

