# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pei/Documents/code/cpp/airQualityProject/SourceCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pei/Documents/code/cpp/airQualityProject/SourceCode

# Include any dependencies generated for this target.
include CMakeFiles/airQualityProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/airQualityProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/airQualityProject.dir/flags.make

include/moc_app.cpp: include/app.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/moc_app.cpp"
	cd /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include && /usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_app.cpp_parameters

include/moc_calculation.cpp: include/calculation.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating include/moc_calculation.cpp"
	cd /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include && /usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_calculation.cpp_parameters

include/moc_mainwindow.cpp: include/mainwindow.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating include/moc_mainwindow.cpp"
	cd /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include && /usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_mainwindow.cpp_parameters

include/moc_marker.cpp: include/marker.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating include/moc_marker.cpp"
	cd /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include && /usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_marker.cpp_parameters

include/moc_read.cpp: include/read.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating include/moc_read.cpp"
	cd /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include && /usr/lib/qt5/bin/moc @/home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_read.cpp_parameters

ui_mainwindow.h: src/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating ui_mainwindow.h"
	/usr/lib/qt5/bin/uic -o /home/pei/Documents/code/cpp/airQualityProject/SourceCode/ui_mainwindow.h /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/mainwindow.ui

CMakeFiles/airQualityProject.dir/src/app.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/src/app.cpp.o: src/app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/airQualityProject.dir/src/app.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/src/app.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/app.cpp

CMakeFiles/airQualityProject.dir/src/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/src/app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/app.cpp > CMakeFiles/airQualityProject.dir/src/app.cpp.i

CMakeFiles/airQualityProject.dir/src/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/src/app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/app.cpp -o CMakeFiles/airQualityProject.dir/src/app.cpp.s

CMakeFiles/airQualityProject.dir/src/app.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/src/app.cpp.o.requires

CMakeFiles/airQualityProject.dir/src/app.cpp.o.provides: CMakeFiles/airQualityProject.dir/src/app.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/src/app.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/src/app.cpp.o.provides

CMakeFiles/airQualityProject.dir/src/app.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/src/app.cpp.o


CMakeFiles/airQualityProject.dir/src/calculation.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/src/calculation.cpp.o: src/calculation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/airQualityProject.dir/src/calculation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/src/calculation.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/calculation.cpp

CMakeFiles/airQualityProject.dir/src/calculation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/src/calculation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/calculation.cpp > CMakeFiles/airQualityProject.dir/src/calculation.cpp.i

CMakeFiles/airQualityProject.dir/src/calculation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/src/calculation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/calculation.cpp -o CMakeFiles/airQualityProject.dir/src/calculation.cpp.s

CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.requires

CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.provides: CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.provides

CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/src/calculation.cpp.o


CMakeFiles/airQualityProject.dir/src/main.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/airQualityProject.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/src/main.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/main.cpp

CMakeFiles/airQualityProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/main.cpp > CMakeFiles/airQualityProject.dir/src/main.cpp.i

CMakeFiles/airQualityProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/main.cpp -o CMakeFiles/airQualityProject.dir/src/main.cpp.s

CMakeFiles/airQualityProject.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/src/main.cpp.o.requires

CMakeFiles/airQualityProject.dir/src/main.cpp.o.provides: CMakeFiles/airQualityProject.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/src/main.cpp.o.provides

CMakeFiles/airQualityProject.dir/src/main.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/src/main.cpp.o


CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o: src/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/mainwindow.cpp

CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/mainwindow.cpp > CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.i

CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/mainwindow.cpp -o CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.s

CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.requires

CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.provides: CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.provides

CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o


CMakeFiles/airQualityProject.dir/src/marker.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/src/marker.cpp.o: src/marker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/airQualityProject.dir/src/marker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/src/marker.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/marker.cpp

CMakeFiles/airQualityProject.dir/src/marker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/src/marker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/marker.cpp > CMakeFiles/airQualityProject.dir/src/marker.cpp.i

CMakeFiles/airQualityProject.dir/src/marker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/src/marker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/marker.cpp -o CMakeFiles/airQualityProject.dir/src/marker.cpp.s

CMakeFiles/airQualityProject.dir/src/marker.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/src/marker.cpp.o.requires

CMakeFiles/airQualityProject.dir/src/marker.cpp.o.provides: CMakeFiles/airQualityProject.dir/src/marker.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/src/marker.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/src/marker.cpp.o.provides

CMakeFiles/airQualityProject.dir/src/marker.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/src/marker.cpp.o


CMakeFiles/airQualityProject.dir/src/read.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/src/read.cpp.o: src/read.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/airQualityProject.dir/src/read.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/src/read.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/read.cpp

CMakeFiles/airQualityProject.dir/src/read.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/src/read.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/read.cpp > CMakeFiles/airQualityProject.dir/src/read.cpp.i

CMakeFiles/airQualityProject.dir/src/read.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/src/read.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/src/read.cpp -o CMakeFiles/airQualityProject.dir/src/read.cpp.s

CMakeFiles/airQualityProject.dir/src/read.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/src/read.cpp.o.requires

CMakeFiles/airQualityProject.dir/src/read.cpp.o.provides: CMakeFiles/airQualityProject.dir/src/read.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/src/read.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/src/read.cpp.o.provides

CMakeFiles/airQualityProject.dir/src/read.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/src/read.cpp.o


CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o: include/moc_app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_app.cpp

CMakeFiles/airQualityProject.dir/include/moc_app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/include/moc_app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_app.cpp > CMakeFiles/airQualityProject.dir/include/moc_app.cpp.i

CMakeFiles/airQualityProject.dir/include/moc_app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/include/moc_app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_app.cpp -o CMakeFiles/airQualityProject.dir/include/moc_app.cpp.s

CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.requires

CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.provides: CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.provides

CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o


CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o: include/moc_calculation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_calculation.cpp

CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_calculation.cpp > CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.i

CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_calculation.cpp -o CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.s

CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.requires

CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.provides: CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.provides

CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o


CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o: include/moc_mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_mainwindow.cpp

CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_mainwindow.cpp > CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.i

CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_mainwindow.cpp -o CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.s

CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.requires

CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.provides: CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.provides

CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o


CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o: include/moc_marker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_marker.cpp

CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_marker.cpp > CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.i

CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_marker.cpp -o CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.s

CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.requires

CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.provides: CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.provides

CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o


CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o: include/moc_read.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_read.cpp

CMakeFiles/airQualityProject.dir/include/moc_read.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/include/moc_read.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_read.cpp > CMakeFiles/airQualityProject.dir/include/moc_read.cpp.i

CMakeFiles/airQualityProject.dir/include/moc_read.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/include/moc_read.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/include/moc_read.cpp -o CMakeFiles/airQualityProject.dir/include/moc_read.cpp.s

CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.requires

CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.provides: CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.provides

CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o


CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o: CMakeFiles/airQualityProject.dir/flags.make
CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o: airQualityProject_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o -c /home/pei/Documents/code/cpp/airQualityProject/SourceCode/airQualityProject_autogen/mocs_compilation.cpp

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pei/Documents/code/cpp/airQualityProject/SourceCode/airQualityProject_autogen/mocs_compilation.cpp > CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.i

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pei/Documents/code/cpp/airQualityProject/SourceCode/airQualityProject_autogen/mocs_compilation.cpp -o CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.s

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/airQualityProject.dir/build.make CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o


# Object files for target airQualityProject
airQualityProject_OBJECTS = \
"CMakeFiles/airQualityProject.dir/src/app.cpp.o" \
"CMakeFiles/airQualityProject.dir/src/calculation.cpp.o" \
"CMakeFiles/airQualityProject.dir/src/main.cpp.o" \
"CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o" \
"CMakeFiles/airQualityProject.dir/src/marker.cpp.o" \
"CMakeFiles/airQualityProject.dir/src/read.cpp.o" \
"CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o" \
"CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o" \
"CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o" \
"CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o" \
"CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o" \
"CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o"

# External object files for target airQualityProject
airQualityProject_EXTERNAL_OBJECTS =

libairQualityProject.a: CMakeFiles/airQualityProject.dir/src/app.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/src/calculation.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/src/main.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/src/marker.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/src/read.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o
libairQualityProject.a: CMakeFiles/airQualityProject.dir/build.make
libairQualityProject.a: CMakeFiles/airQualityProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX static library libairQualityProject.a"
	$(CMAKE_COMMAND) -P CMakeFiles/airQualityProject.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/airQualityProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/airQualityProject.dir/build: libairQualityProject.a

.PHONY : CMakeFiles/airQualityProject.dir/build

CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/src/app.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/src/calculation.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/src/main.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/src/mainwindow.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/src/marker.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/src/read.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/include/moc_app.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/include/moc_calculation.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/include/moc_mainwindow.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/include/moc_marker.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/include/moc_read.cpp.o.requires
CMakeFiles/airQualityProject.dir/requires: CMakeFiles/airQualityProject.dir/airQualityProject_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/airQualityProject.dir/requires

CMakeFiles/airQualityProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/airQualityProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/airQualityProject.dir/clean

CMakeFiles/airQualityProject.dir/depend: include/moc_app.cpp
CMakeFiles/airQualityProject.dir/depend: include/moc_calculation.cpp
CMakeFiles/airQualityProject.dir/depend: include/moc_mainwindow.cpp
CMakeFiles/airQualityProject.dir/depend: include/moc_marker.cpp
CMakeFiles/airQualityProject.dir/depend: include/moc_read.cpp
CMakeFiles/airQualityProject.dir/depend: ui_mainwindow.h
	cd /home/pei/Documents/code/cpp/airQualityProject/SourceCode && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pei/Documents/code/cpp/airQualityProject/SourceCode /home/pei/Documents/code/cpp/airQualityProject/SourceCode /home/pei/Documents/code/cpp/airQualityProject/SourceCode /home/pei/Documents/code/cpp/airQualityProject/SourceCode /home/pei/Documents/code/cpp/airQualityProject/SourceCode/CMakeFiles/airQualityProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/airQualityProject.dir/depend

