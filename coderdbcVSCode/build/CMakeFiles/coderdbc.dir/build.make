# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build

# Include any dependencies generated for this target.
include CMakeFiles/coderdbc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/coderdbc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/coderdbc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/coderdbc.dir/flags.make

CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-main-generator.cpp
CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj -MF CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj.d -o CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-main-generator.cpp

CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-main-generator.cpp > CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.i

CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-main-generator.cpp -o CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.s

CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-util-generator.cpp
CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj -MF CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj.d -o CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-util-generator.cpp

CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-util-generator.cpp > CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.i

CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-util-generator.cpp -o CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.s

CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/conditional-tree.cpp
CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj -MF CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj.d -o CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/conditional-tree.cpp

CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/conditional-tree.cpp > CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.i

CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/conditional-tree.cpp -o CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.s

CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-sigprinter.cpp
CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj -MF CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj.d -o CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-sigprinter.cpp

CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-sigprinter.cpp > CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.i

CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/c-sigprinter.cpp -o CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.s

CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/filewriter.cpp
CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj -MF CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj.d -o CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/filewriter.cpp

CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/filewriter.cpp > CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.i

CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/filewriter.cpp -o CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.s

CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/fs-creator.cpp
CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj -MF CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj.d -o CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/fs-creator.cpp

CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/fs-creator.cpp > CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.i

CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/codegen/fs-creator.cpp -o CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.s

CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/helpers/formatter.cpp
CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj -MF CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj.d -o CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/helpers/formatter.cpp

CMakeFiles/coderdbc.dir/helpers/formatter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/helpers/formatter.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/helpers/formatter.cpp > CMakeFiles/coderdbc.dir/helpers/formatter.cpp.i

CMakeFiles/coderdbc.dir/helpers/formatter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/helpers/formatter.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/helpers/formatter.cpp -o CMakeFiles/coderdbc.dir/helpers/formatter.cpp.s

CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbclineparser.cpp
CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj -MF CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj.d -o CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbclineparser.cpp

CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbclineparser.cpp > CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.i

CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbclineparser.cpp -o CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.s

CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbcscanner.cpp
CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj -MF CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj.d -o CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbcscanner.cpp

CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbcscanner.cpp > CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.i

CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/parser/dbcscanner.cpp -o CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.s

CMakeFiles/coderdbc.dir/maincli.cpp.obj: CMakeFiles/coderdbc.dir/flags.make
CMakeFiles/coderdbc.dir/maincli.cpp.obj: CMakeFiles/coderdbc.dir/includes_CXX.rsp
CMakeFiles/coderdbc.dir/maincli.cpp.obj: C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/maincli.cpp
CMakeFiles/coderdbc.dir/maincli.cpp.obj: CMakeFiles/coderdbc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/coderdbc.dir/maincli.cpp.obj"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/coderdbc.dir/maincli.cpp.obj -MF CMakeFiles/coderdbc.dir/maincli.cpp.obj.d -o CMakeFiles/coderdbc.dir/maincli.cpp.obj -c C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/maincli.cpp

CMakeFiles/coderdbc.dir/maincli.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coderdbc.dir/maincli.cpp.i"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/maincli.cpp > CMakeFiles/coderdbc.dir/maincli.cpp.i

CMakeFiles/coderdbc.dir/maincli.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coderdbc.dir/maincli.cpp.s"
	C:/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src/maincli.cpp -o CMakeFiles/coderdbc.dir/maincli.cpp.s

# Object files for target coderdbc
coderdbc_OBJECTS = \
"CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj" \
"CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj" \
"CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj" \
"CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj" \
"CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj" \
"CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj" \
"CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj" \
"CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj" \
"CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj" \
"CMakeFiles/coderdbc.dir/maincli.cpp.obj"

# External object files for target coderdbc
coderdbc_EXTERNAL_OBJECTS =

coderdbc.exe: CMakeFiles/coderdbc.dir/codegen/c-main-generator.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/codegen/c-util-generator.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/codegen/conditional-tree.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/codegen/c-sigprinter.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/codegen/filewriter.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/codegen/fs-creator.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/helpers/formatter.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/parser/dbclineparser.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/parser/dbcscanner.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/maincli.cpp.obj
coderdbc.exe: CMakeFiles/coderdbc.dir/build.make
coderdbc.exe: CMakeFiles/coderdbc.dir/linklibs.rsp
coderdbc.exe: CMakeFiles/coderdbc.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable coderdbc.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/coderdbc.dir/objects.a
	C:/MinGW/bin/ar.exe qc CMakeFiles/coderdbc.dir/objects.a @CMakeFiles/coderdbc.dir/objects1.rsp
	C:/MinGW/bin/g++.exe -g -Wl,--whole-archive CMakeFiles/coderdbc.dir/objects.a -Wl,--no-whole-archive -o coderdbc.exe -Wl,--out-implib,libcoderdbc.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/coderdbc.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/coderdbc.dir/build: coderdbc.exe
.PHONY : CMakeFiles/coderdbc.dir/build

CMakeFiles/coderdbc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/coderdbc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/coderdbc.dir/clean

CMakeFiles/coderdbc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/src C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build C:/Lavoro/Clienti/SpinDox/FerrariGES/CAN_Coderdbc/coderdbcVSCode/build/CMakeFiles/coderdbc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coderdbc.dir/depend

