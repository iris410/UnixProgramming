# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/head2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/head2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/head2.dir/flags.make

CMakeFiles/head2.dir/Assign1-19204584.c.o: CMakeFiles/head2.dir/flags.make
CMakeFiles/head2.dir/Assign1-19204584.c.o: ../Assign1-19204584.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/head2.dir/Assign1-19204584.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/head2.dir/Assign1-19204584.c.o   -c /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/Assign1-19204584.c

CMakeFiles/head2.dir/Assign1-19204584.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/head2.dir/Assign1-19204584.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/Assign1-19204584.c > CMakeFiles/head2.dir/Assign1-19204584.c.i

CMakeFiles/head2.dir/Assign1-19204584.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/head2.dir/Assign1-19204584.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/Assign1-19204584.c -o CMakeFiles/head2.dir/Assign1-19204584.c.s

# Object files for target head2
head2_OBJECTS = \
"CMakeFiles/head2.dir/Assign1-19204584.c.o"

# External object files for target head2
head2_EXTERNAL_OBJECTS =

head2: CMakeFiles/head2.dir/Assign1-19204584.c.o
head2: CMakeFiles/head2.dir/build.make
head2: CMakeFiles/head2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable head2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/head2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/head2.dir/build: head2

.PHONY : CMakeFiles/head2.dir/build

CMakeFiles/head2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/head2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/head2.dir/clean

CMakeFiles/head2.dir/depend:
	cd /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/cmake-build-debug /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/cmake-build-debug /Users/iris/Desktop/UCD/stage2-spring/COMP20200-UnixProgramming/Lab/UnixProgramming/cmake-build-debug/CMakeFiles/head2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/head2.dir/depend

