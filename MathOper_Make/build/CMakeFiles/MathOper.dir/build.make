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
CMAKE_SOURCE_DIR = /home/user/lab2/MathOper_Make

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/lab2/MathOper_Make/build

# Include any dependencies generated for this target.
include CMakeFiles/MathOper.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MathOper.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MathOper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MathOper.dir/flags.make

CMakeFiles/MathOper.dir/lib/MathOper.o: CMakeFiles/MathOper.dir/flags.make
CMakeFiles/MathOper.dir/lib/MathOper.o: ../lib/MathOper.c
CMakeFiles/MathOper.dir/lib/MathOper.o: CMakeFiles/MathOper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/lab2/MathOper_Make/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MathOper.dir/lib/MathOper.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MathOper.dir/lib/MathOper.o -MF CMakeFiles/MathOper.dir/lib/MathOper.o.d -o CMakeFiles/MathOper.dir/lib/MathOper.o -c /home/user/lab2/MathOper_Make/lib/MathOper.c

CMakeFiles/MathOper.dir/lib/MathOper.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MathOper.dir/lib/MathOper.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/lab2/MathOper_Make/lib/MathOper.c > CMakeFiles/MathOper.dir/lib/MathOper.i

CMakeFiles/MathOper.dir/lib/MathOper.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MathOper.dir/lib/MathOper.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/lab2/MathOper_Make/lib/MathOper.c -o CMakeFiles/MathOper.dir/lib/MathOper.s

# Object files for target MathOper
MathOper_OBJECTS = \
"CMakeFiles/MathOper.dir/lib/MathOper.o"

# External object files for target MathOper
MathOper_EXTERNAL_OBJECTS =

libMathOper.a: CMakeFiles/MathOper.dir/lib/MathOper.o
libMathOper.a: CMakeFiles/MathOper.dir/build.make
libMathOper.a: CMakeFiles/MathOper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/lab2/MathOper_Make/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libMathOper.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MathOper.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MathOper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MathOper.dir/build: libMathOper.a
.PHONY : CMakeFiles/MathOper.dir/build

CMakeFiles/MathOper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MathOper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MathOper.dir/clean

CMakeFiles/MathOper.dir/depend:
	cd /home/user/lab2/MathOper_Make/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/lab2/MathOper_Make /home/user/lab2/MathOper_Make /home/user/lab2/MathOper_Make/build /home/user/lab2/MathOper_Make/build /home/user/lab2/MathOper_Make/build/CMakeFiles/MathOper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MathOper.dir/depend

