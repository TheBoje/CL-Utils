# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = C:\Users\vince\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\vince\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Cours\Projets\CL-utils\CL-Utils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CL_Utils.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CL_Utils.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CL_Utils.dir/flags.make

CMakeFiles/CL_Utils.dir/Graph/source/graph.c.obj: CMakeFiles/CL_Utils.dir/flags.make
CMakeFiles/CL_Utils.dir/Graph/source/graph.c.obj: CMakeFiles/CL_Utils.dir/includes_C.rsp
CMakeFiles/CL_Utils.dir/Graph/source/graph.c.obj: ../Graph/source/graph.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CL_Utils.dir/Graph/source/graph.c.obj"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CL_Utils.dir\Graph\source\graph.c.obj -c D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\graph.c

CMakeFiles/CL_Utils.dir/Graph/source/graph.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CL_Utils.dir/Graph/source/graph.c.i"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\graph.c > CMakeFiles\CL_Utils.dir\Graph\source\graph.c.i

CMakeFiles/CL_Utils.dir/Graph/source/graph.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CL_Utils.dir/Graph/source/graph.c.s"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\graph.c -o CMakeFiles\CL_Utils.dir\Graph\source\graph.c.s

CMakeFiles/CL_Utils.dir/Graph/source/main.c.obj: CMakeFiles/CL_Utils.dir/flags.make
CMakeFiles/CL_Utils.dir/Graph/source/main.c.obj: CMakeFiles/CL_Utils.dir/includes_C.rsp
CMakeFiles/CL_Utils.dir/Graph/source/main.c.obj: ../Graph/source/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CL_Utils.dir/Graph/source/main.c.obj"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CL_Utils.dir\Graph\source\main.c.obj -c D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\main.c

CMakeFiles/CL_Utils.dir/Graph/source/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CL_Utils.dir/Graph/source/main.c.i"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\main.c > CMakeFiles\CL_Utils.dir\Graph\source\main.c.i

CMakeFiles/CL_Utils.dir/Graph/source/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CL_Utils.dir/Graph/source/main.c.s"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\main.c -o CMakeFiles\CL_Utils.dir\Graph\source\main.c.s

CMakeFiles/CL_Utils.dir/Graph/source/node.c.obj: CMakeFiles/CL_Utils.dir/flags.make
CMakeFiles/CL_Utils.dir/Graph/source/node.c.obj: CMakeFiles/CL_Utils.dir/includes_C.rsp
CMakeFiles/CL_Utils.dir/Graph/source/node.c.obj: ../Graph/source/node.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CL_Utils.dir/Graph/source/node.c.obj"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CL_Utils.dir\Graph\source\node.c.obj -c D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\node.c

CMakeFiles/CL_Utils.dir/Graph/source/node.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CL_Utils.dir/Graph/source/node.c.i"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\node.c > CMakeFiles\CL_Utils.dir\Graph\source\node.c.i

CMakeFiles/CL_Utils.dir/Graph/source/node.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CL_Utils.dir/Graph/source/node.c.s"
	"D:\Program Files\mingw\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Cours\Projets\CL-utils\CL-Utils\Graph\source\node.c -o CMakeFiles\CL_Utils.dir\Graph\source\node.c.s

# Object files for target CL_Utils
CL_Utils_OBJECTS = \
"CMakeFiles/CL_Utils.dir/Graph/source/graph.c.obj" \
"CMakeFiles/CL_Utils.dir/Graph/source/main.c.obj" \
"CMakeFiles/CL_Utils.dir/Graph/source/node.c.obj"

# External object files for target CL_Utils
CL_Utils_EXTERNAL_OBJECTS =

CL_Utils.exe: CMakeFiles/CL_Utils.dir/Graph/source/graph.c.obj
CL_Utils.exe: CMakeFiles/CL_Utils.dir/Graph/source/main.c.obj
CL_Utils.exe: CMakeFiles/CL_Utils.dir/Graph/source/node.c.obj
CL_Utils.exe: CMakeFiles/CL_Utils.dir/build.make
CL_Utils.exe: CMakeFiles/CL_Utils.dir/linklibs.rsp
CL_Utils.exe: CMakeFiles/CL_Utils.dir/objects1.rsp
CL_Utils.exe: CMakeFiles/CL_Utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable CL_Utils.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CL_Utils.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CL_Utils.dir/build: CL_Utils.exe

.PHONY : CMakeFiles/CL_Utils.dir/build

CMakeFiles/CL_Utils.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CL_Utils.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CL_Utils.dir/clean

CMakeFiles/CL_Utils.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Cours\Projets\CL-utils\CL-Utils D:\Cours\Projets\CL-utils\CL-Utils D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug D:\Cours\Projets\CL-utils\CL-Utils\cmake-build-debug\CMakeFiles\CL_Utils.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CL_Utils.dir/depend

