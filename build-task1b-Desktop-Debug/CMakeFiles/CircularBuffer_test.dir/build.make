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
CMAKE_SOURCE_DIR = /home/ender/OOP/Sergeev_Egor_OOP/task1b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ender/OOP/build-task1b-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/CircularBuffer_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CircularBuffer_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CircularBuffer_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CircularBuffer_test.dir/flags.make

CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o: CMakeFiles/CircularBuffer_test.dir/flags.make
CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o: /home/ender/OOP/Sergeev_Egor_OOP/task1b/circular_buffer_test.cpp
CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o: CMakeFiles/CircularBuffer_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ender/OOP/build-task1b-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o -MF CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o.d -o CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o -c /home/ender/OOP/Sergeev_Egor_OOP/task1b/circular_buffer_test.cpp

CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ender/OOP/Sergeev_Egor_OOP/task1b/circular_buffer_test.cpp > CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.i

CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ender/OOP/Sergeev_Egor_OOP/task1b/circular_buffer_test.cpp -o CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.s

# Object files for target CircularBuffer_test
CircularBuffer_test_OBJECTS = \
"CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o"

# External object files for target CircularBuffer_test
CircularBuffer_test_EXTERNAL_OBJECTS =

CircularBuffer_test: CMakeFiles/CircularBuffer_test.dir/circular_buffer_test.cpp.o
CircularBuffer_test: CMakeFiles/CircularBuffer_test.dir/build.make
CircularBuffer_test: lib/libgtest_maind.a
CircularBuffer_test: libCircularBuffer.a
CircularBuffer_test: lib/libgtestd.a
CircularBuffer_test: CMakeFiles/CircularBuffer_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ender/OOP/build-task1b-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CircularBuffer_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CircularBuffer_test.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=CircularBuffer_test -D TEST_EXECUTABLE=/home/ender/OOP/build-task1b-Desktop-Debug/CircularBuffer_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/ender/OOP/build-task1b-Desktop-Debug -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=CircularBuffer_test_TESTS -D CTEST_FILE=/home/ender/OOP/build-task1b-Desktop-Debug/CircularBuffer_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/CircularBuffer_test.dir/build: CircularBuffer_test
.PHONY : CMakeFiles/CircularBuffer_test.dir/build

CMakeFiles/CircularBuffer_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CircularBuffer_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CircularBuffer_test.dir/clean

CMakeFiles/CircularBuffer_test.dir/depend:
	cd /home/ender/OOP/build-task1b-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ender/OOP/Sergeev_Egor_OOP/task1b /home/ender/OOP/Sergeev_Egor_OOP/task1b /home/ender/OOP/build-task1b-Desktop-Debug /home/ender/OOP/build-task1b-Desktop-Debug /home/ender/OOP/build-task1b-Desktop-Debug/CMakeFiles/CircularBuffer_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CircularBuffer_test.dir/depend

