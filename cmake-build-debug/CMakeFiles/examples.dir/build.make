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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/examples.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/examples.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/examples.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/examples.dir/flags.make

CMakeFiles/examples.dir/main.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/main.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/main.cpp.obj: ../main.cpp
CMakeFiles/examples.dir/main.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/examples.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/main.cpp.obj -MF CMakeFiles\examples.dir\main.cpp.obj.d -o CMakeFiles\examples.dir\main.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\main.cpp"

CMakeFiles/examples.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\main.cpp" > CMakeFiles\examples.dir\main.cpp.i

CMakeFiles/examples.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\main.cpp" -o CMakeFiles\examples.dir\main.cpp.s

CMakeFiles/examples.dir/src/global.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/global.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/global.cpp.obj: ../src/global.cpp
CMakeFiles/examples.dir/src/global.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/examples.dir/src/global.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/global.cpp.obj -MF CMakeFiles\examples.dir\src\global.cpp.obj.d -o CMakeFiles\examples.dir\src\global.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\global.cpp"

CMakeFiles/examples.dir/src/global.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/global.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\global.cpp" > CMakeFiles\examples.dir\src\global.cpp.i

CMakeFiles/examples.dir/src/global.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/global.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\global.cpp" -o CMakeFiles\examples.dir\src\global.cpp.s

CMakeFiles/examples.dir/src/menu2.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/menu2.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/menu2.cpp.obj: ../src/menu2.cpp
CMakeFiles/examples.dir/src/menu2.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/examples.dir/src/menu2.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/menu2.cpp.obj -MF CMakeFiles\examples.dir\src\menu2.cpp.obj.d -o CMakeFiles\examples.dir\src\menu2.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\menu2.cpp"

CMakeFiles/examples.dir/src/menu2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/menu2.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\menu2.cpp" > CMakeFiles\examples.dir\src\menu2.cpp.i

CMakeFiles/examples.dir/src/menu2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/menu2.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\menu2.cpp" -o CMakeFiles\examples.dir\src\menu2.cpp.s

CMakeFiles/examples.dir/src/scenes.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/scenes.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/scenes.cpp.obj: ../src/scenes.cpp
CMakeFiles/examples.dir/src/scenes.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/examples.dir/src/scenes.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/scenes.cpp.obj -MF CMakeFiles\examples.dir\src\scenes.cpp.obj.d -o CMakeFiles\examples.dir\src\scenes.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\scenes.cpp"

CMakeFiles/examples.dir/src/scenes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/scenes.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\scenes.cpp" > CMakeFiles\examples.dir\src\scenes.cpp.i

CMakeFiles/examples.dir/src/scenes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/scenes.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\scenes.cpp" -o CMakeFiles\examples.dir\src\scenes.cpp.s

CMakeFiles/examples.dir/src/Options.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/Options.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/Options.cpp.obj: ../src/Options.cpp
CMakeFiles/examples.dir/src/Options.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/examples.dir/src/Options.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/Options.cpp.obj -MF CMakeFiles\examples.dir\src\Options.cpp.obj.d -o CMakeFiles\examples.dir\src\Options.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\Options.cpp"

CMakeFiles/examples.dir/src/Options.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/Options.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\Options.cpp" > CMakeFiles\examples.dir\src\Options.cpp.i

CMakeFiles/examples.dir/src/Options.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/Options.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\Options.cpp" -o CMakeFiles\examples.dir\src\Options.cpp.s

CMakeFiles/examples.dir/src/App.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/App.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/App.cpp.obj: ../src/App.cpp
CMakeFiles/examples.dir/src/App.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/examples.dir/src/App.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/App.cpp.obj -MF CMakeFiles\examples.dir\src\App.cpp.obj.d -o CMakeFiles\examples.dir\src\App.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\App.cpp"

CMakeFiles/examples.dir/src/App.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/App.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\App.cpp" > CMakeFiles\examples.dir\src\App.cpp.i

CMakeFiles/examples.dir/src/App.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/App.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\App.cpp" -o CMakeFiles\examples.dir\src\App.cpp.s

CMakeFiles/examples.dir/src/maze/maze2.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/maze/maze2.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/maze/maze2.cpp.obj: ../src/maze/maze2.cpp
CMakeFiles/examples.dir/src/maze/maze2.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/examples.dir/src/maze/maze2.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/maze/maze2.cpp.obj -MF CMakeFiles\examples.dir\src\maze\maze2.cpp.obj.d -o CMakeFiles\examples.dir\src\maze\maze2.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\maze2.cpp"

CMakeFiles/examples.dir/src/maze/maze2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/maze/maze2.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\maze2.cpp" > CMakeFiles\examples.dir\src\maze\maze2.cpp.i

CMakeFiles/examples.dir/src/maze/maze2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/maze/maze2.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\maze2.cpp" -o CMakeFiles\examples.dir\src\maze\maze2.cpp.s

CMakeFiles/examples.dir/src/maze/Player.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/maze/Player.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/maze/Player.cpp.obj: ../src/maze/Player.cpp
CMakeFiles/examples.dir/src/maze/Player.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/examples.dir/src/maze/Player.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/maze/Player.cpp.obj -MF CMakeFiles\examples.dir\src\maze\Player.cpp.obj.d -o CMakeFiles\examples.dir\src\maze\Player.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Player.cpp"

CMakeFiles/examples.dir/src/maze/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/maze/Player.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Player.cpp" > CMakeFiles\examples.dir\src\maze\Player.cpp.i

CMakeFiles/examples.dir/src/maze/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/maze/Player.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Player.cpp" -o CMakeFiles\examples.dir\src\maze\Player.cpp.s

CMakeFiles/examples.dir/src/maze/Bot.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/maze/Bot.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/maze/Bot.cpp.obj: ../src/maze/Bot.cpp
CMakeFiles/examples.dir/src/maze/Bot.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/examples.dir/src/maze/Bot.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/maze/Bot.cpp.obj -MF CMakeFiles\examples.dir\src\maze\Bot.cpp.obj.d -o CMakeFiles\examples.dir\src\maze\Bot.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Bot.cpp"

CMakeFiles/examples.dir/src/maze/Bot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/maze/Bot.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Bot.cpp" > CMakeFiles\examples.dir\src\maze\Bot.cpp.i

CMakeFiles/examples.dir/src/maze/Bot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/maze/Bot.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Bot.cpp" -o CMakeFiles\examples.dir\src\maze\Bot.cpp.s

CMakeFiles/examples.dir/src/maze/Player2.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/maze/Player2.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/maze/Player2.cpp.obj: ../src/maze/Player2.cpp
CMakeFiles/examples.dir/src/maze/Player2.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/examples.dir/src/maze/Player2.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/maze/Player2.cpp.obj -MF CMakeFiles\examples.dir\src\maze\Player2.cpp.obj.d -o CMakeFiles\examples.dir\src\maze\Player2.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Player2.cpp"

CMakeFiles/examples.dir/src/maze/Player2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/maze/Player2.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Player2.cpp" > CMakeFiles\examples.dir\src\maze\Player2.cpp.i

CMakeFiles/examples.dir/src/maze/Player2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/maze/Player2.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Player2.cpp" -o CMakeFiles\examples.dir\src\maze\Player2.cpp.s

CMakeFiles/examples.dir/src/maze/Game.cpp.obj: CMakeFiles/examples.dir/flags.make
CMakeFiles/examples.dir/src/maze/Game.cpp.obj: CMakeFiles/examples.dir/includes_CXX.rsp
CMakeFiles/examples.dir/src/maze/Game.cpp.obj: ../src/maze/Game.cpp
CMakeFiles/examples.dir/src/maze/Game.cpp.obj: CMakeFiles/examples.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/examples.dir/src/maze/Game.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/examples.dir/src/maze/Game.cpp.obj -MF CMakeFiles\examples.dir\src\maze\Game.cpp.obj.d -o CMakeFiles\examples.dir\src\maze\Game.cpp.obj -c "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Game.cpp"

CMakeFiles/examples.dir/src/maze/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/examples.dir/src/maze/Game.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Game.cpp" > CMakeFiles\examples.dir\src\maze\Game.cpp.i

CMakeFiles/examples.dir/src/maze/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/examples.dir/src/maze/Game.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\src\maze\Game.cpp" -o CMakeFiles\examples.dir\src\maze\Game.cpp.s

# Object files for target examples
examples_OBJECTS = \
"CMakeFiles/examples.dir/main.cpp.obj" \
"CMakeFiles/examples.dir/src/global.cpp.obj" \
"CMakeFiles/examples.dir/src/menu2.cpp.obj" \
"CMakeFiles/examples.dir/src/scenes.cpp.obj" \
"CMakeFiles/examples.dir/src/Options.cpp.obj" \
"CMakeFiles/examples.dir/src/App.cpp.obj" \
"CMakeFiles/examples.dir/src/maze/maze2.cpp.obj" \
"CMakeFiles/examples.dir/src/maze/Player.cpp.obj" \
"CMakeFiles/examples.dir/src/maze/Bot.cpp.obj" \
"CMakeFiles/examples.dir/src/maze/Player2.cpp.obj" \
"CMakeFiles/examples.dir/src/maze/Game.cpp.obj"

# External object files for target examples
examples_EXTERNAL_OBJECTS =

examples.exe: CMakeFiles/examples.dir/main.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/global.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/menu2.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/scenes.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/Options.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/App.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/maze/maze2.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/maze/Player.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/maze/Bot.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/maze/Player2.cpp.obj
examples.exe: CMakeFiles/examples.dir/src/maze/Game.cpp.obj
examples.exe: CMakeFiles/examples.dir/build.make
examples.exe: _deps/raylib-build/raylib/libraylib.a
examples.exe: _deps/raylib-build/raylib/external/glfw/src/libglfw3.a
examples.exe: CMakeFiles/examples.dir/linklibs.rsp
examples.exe: CMakeFiles/examples.dir/objects1.rsp
examples.exe: CMakeFiles/examples.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable examples.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\examples.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/examples.dir/build: examples.exe
.PHONY : CMakeFiles/examples.dir/build

CMakeFiles/examples.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\examples.dir\cmake_clean.cmake
.PHONY : CMakeFiles/examples.dir/clean

CMakeFiles/examples.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5" "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5" "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug" "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug" "D:\Semestre 2023_0_CS\PPPPPPPPP\proyecto-final-2023_0-proyecto-final-2023_0-grupo-5\cmake-build-debug\CMakeFiles\examples.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/examples.dir/depend

