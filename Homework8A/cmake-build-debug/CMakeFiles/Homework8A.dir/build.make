# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/djaimes/CLionProjects/Homework8A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/djaimes/CLionProjects/Homework8A/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Homework8A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Homework8A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Homework8A.dir/flags.make

CMakeFiles/Homework8A.dir/main.cpp.o: CMakeFiles/Homework8A.dir/flags.make
CMakeFiles/Homework8A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/djaimes/CLionProjects/Homework8A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Homework8A.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Homework8A.dir/main.cpp.o -c /Users/djaimes/CLionProjects/Homework8A/main.cpp

CMakeFiles/Homework8A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Homework8A.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/djaimes/CLionProjects/Homework8A/main.cpp > CMakeFiles/Homework8A.dir/main.cpp.i

CMakeFiles/Homework8A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Homework8A.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/djaimes/CLionProjects/Homework8A/main.cpp -o CMakeFiles/Homework8A.dir/main.cpp.s

# Object files for target Homework8A
Homework8A_OBJECTS = \
"CMakeFiles/Homework8A.dir/main.cpp.o"

# External object files for target Homework8A
Homework8A_EXTERNAL_OBJECTS =

Homework8A: CMakeFiles/Homework8A.dir/main.cpp.o
Homework8A: CMakeFiles/Homework8A.dir/build.make
Homework8A: CMakeFiles/Homework8A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/djaimes/CLionProjects/Homework8A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Homework8A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Homework8A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Homework8A.dir/build: Homework8A

.PHONY : CMakeFiles/Homework8A.dir/build

CMakeFiles/Homework8A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Homework8A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Homework8A.dir/clean

CMakeFiles/Homework8A.dir/depend:
	cd /Users/djaimes/CLionProjects/Homework8A/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/djaimes/CLionProjects/Homework8A /Users/djaimes/CLionProjects/Homework8A /Users/djaimes/CLionProjects/Homework8A/cmake-build-debug /Users/djaimes/CLionProjects/Homework8A/cmake-build-debug /Users/djaimes/CLionProjects/Homework8A/cmake-build-debug/CMakeFiles/Homework8A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Homework8A.dir/depend
