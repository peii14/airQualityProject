# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pei/Documents/code/cpp/airQualityProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/airQualityProject.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/airQualityProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/airQualityProject.dir/flags.make

moc_app.cpp: ../app.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_app.cpp"
	/usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_app.cpp_parameters

moc_calculation.cpp: ../calculation.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_calculation.cpp"
	/usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_calculation.cpp_parameters

moc_mainwindow.cpp: ../mainwindow.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_mainwindow.cpp"
	/usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_mainwindow.cpp_parameters

moc_marker.cpp: ../marker.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_marker.cpp"
	/usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_marker.cpp_parameters

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o: airQualityProject_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/airQualityProject_autogen/mocs_compilation.cpp

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/airQualityProject_autogen/mocs_compilation.cpp > CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.i

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/airQualityProject_autogen/mocs_compilation.cpp -o CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.s

CMakeFiles/airQualityProject.dir/app.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/app.cpp.o: ../app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/airQualityProject.dir/app.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/app.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/app.cpp

CMakeFiles/airQualityProject.dir/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/app.cpp > CMakeFiles/airQualityProject.dir/app.cpp.i

CMakeFiles/airQualityProject.dir/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/app.cpp -o CMakeFiles/airQualityProject.dir/app.cpp.s

CMakeFiles/airQualityProject.dir/calculation.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/calculation.cpp.o: ../calculation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/airQualityProject.dir/calculation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/calculation.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/calculation.cpp

CMakeFiles/airQualityProject.dir/calculation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/calculation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/calculation.cpp > CMakeFiles/airQualityProject.dir/calculation.cpp.i

CMakeFiles/airQualityProject.dir/calculation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/calculation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/calculation.cpp -o CMakeFiles/airQualityProject.dir/calculation.cpp.s

CMakeFiles/airQualityProject.dir/main.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/airQualityProject.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/main.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/main.cpp

CMakeFiles/airQualityProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/main.cpp > CMakeFiles/airQualityProject.dir/main.cpp.i

CMakeFiles/airQualityProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/main.cpp -o CMakeFiles/airQualityProject.dir/main.cpp.s

CMakeFiles/airQualityProject.dir/mainwindow.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/airQualityProject.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/mainwindow.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/mainwindow.cpp

CMakeFiles/airQualityProject.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/mainwindow.cpp > CMakeFiles/airQualityProject.dir/mainwindow.cpp.i

CMakeFiles/airQualityProject.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/mainwindow.cpp -o CMakeFiles/airQualityProject.dir/mainwindow.cpp.s

CMakeFiles/airQualityProject.dir/marker.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/marker.cpp.o: ../marker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/airQualityProject.dir/marker.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/marker.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/marker.cpp

CMakeFiles/airQualityProject.dir/marker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/marker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/marker.cpp > CMakeFiles/airQualityProject.dir/marker.cpp.i

CMakeFiles/airQualityProject.dir/marker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/marker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/marker.cpp -o CMakeFiles/airQualityProject.dir/marker.cpp.s

CMakeFiles/airQualityProject.dir/moc_app.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/moc_app.cpp.o: moc_app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/airQualityProject.dir/moc_app.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/moc_app.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_app.cpp

CMakeFiles/airQualityProject.dir/moc_app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/moc_app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_app.cpp > CMakeFiles/airQualityProject.dir/moc_app.cpp.i

CMakeFiles/airQualityProject.dir/moc_app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/moc_app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_app.cpp -o CMakeFiles/airQualityProject.dir/moc_app.cpp.s

CMakeFiles/airQualityProject.dir/moc_calculation.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/moc_calculation.cpp.o: moc_calculation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/airQualityProject.dir/moc_calculation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/moc_calculation.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_calculation.cpp

CMakeFiles/airQualityProject.dir/moc_calculation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/moc_calculation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_calculation.cpp > CMakeFiles/airQualityProject.dir/moc_calculation.cpp.i

CMakeFiles/airQualityProject.dir/moc_calculation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/moc_calculation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_calculation.cpp -o CMakeFiles/airQualityProject.dir/moc_calculation.cpp.s

CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.o: moc_mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_mainwindow.cpp

CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_mainwindow.cpp > CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.i

CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_mainwindow.cpp -o CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.s

CMakeFiles/airQualityProject.dir/moc_marker.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/moc_marker.cpp.o: moc_marker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/airQualityProject.dir/moc_marker.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/moc_marker.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_marker.cpp

CMakeFiles/airQualityProject.dir/moc_marker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/moc_marker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_marker.cpp > CMakeFiles/airQualityProject.dir/moc_marker.cpp.i

CMakeFiles/airQualityProject.dir/moc_marker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/moc_marker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/moc_marker.cpp -o CMakeFiles/airQualityProject.dir/moc_marker.cpp.s

# Object files for target airQualityProject
airQualityProject_OBJECTS = \
"CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/airQualityProject.dir/app.cpp.o" \
"CMakeFiles/airQualityProject.dir/calculation.cpp.o" \
"CMakeFiles/airQualityProject.dir/main.cpp.o" \
"CMakeFiles/airQualityProject.dir/mainwindow.cpp.o" \
"CMakeFiles/airQualityProject.dir/marker.cpp.o" \
"CMakeFiles/airQualityProject.dir/moc_app.cpp.o" \
"CMakeFiles/airQualityProject.dir/moc_calculation.cpp.o" \
"CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.o" \
"CMakeFiles/airQualityProject.dir/moc_marker.cpp.o"

# External object files for target airQualityProject
airQualityProject_EXTERNAL_OBJECTS =

libairQualityProject.a: CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/app.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/calculation.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/main.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/mainwindow.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/marker.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/moc_app.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/moc_calculation.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/moc_mainwindow.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/moc_marker.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/build.make
libairQualityProject.a: CMakeFiles/airQualityProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX static library libairQualityProject.a"
	$(CMAKE_COMMAND) -P CMakeFiles/airQualityProject.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/airQualityProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/airQualityProject.dir/build: libairQualityProject.a
.PHONY : CMakeFiles/airQualityProject.dir/build

CMakeFiles/airQualityProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/airQualityProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/airQualityProject.dir/clean

CMakeFiles/airQualityProject.dir/depend: moc_app.cpp
CMakeFiles/airQualityProject.dir/depend: moc_calculation.cpp
CMakeFiles/airQualityProject.dir/depend: moc_mainwindow.cpp
CMakeFiles/airQualityProject.dir/depend: moc_marker.cpp
	cd /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pei/Documents/code/cpp/airQualityProject /home/pei/Documents/code/cpp/airQualityProject /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug /home/pei/Documents/code/cpp/airQualityProject/cmake-build-debug/CMakeFiles/airQualityProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/airQualityProject.dir/depend

