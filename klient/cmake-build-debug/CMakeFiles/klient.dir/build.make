# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /opt/clion-2018.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mandi/CLionProjects/klient

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mandi/CLionProjects/klient/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/klient.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/klient.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/klient.dir/flags.make

CMakeFiles/klient.dir/main.cpp.o: CMakeFiles/klient.dir/flags.make
CMakeFiles/klient.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mandi/CLionProjects/klient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/klient.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/klient.dir/main.cpp.o -c /home/mandi/CLionProjects/klient/main.cpp

CMakeFiles/klient.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/klient.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mandi/CLionProjects/klient/main.cpp > CMakeFiles/klient.dir/main.cpp.i

CMakeFiles/klient.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/klient.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mandi/CLionProjects/klient/main.cpp -o CMakeFiles/klient.dir/main.cpp.s

CMakeFiles/klient.dir/auth.cpp.o: CMakeFiles/klient.dir/flags.make
CMakeFiles/klient.dir/auth.cpp.o: ../auth.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mandi/CLionProjects/klient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/klient.dir/auth.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/klient.dir/auth.cpp.o -c /home/mandi/CLionProjects/klient/auth.cpp

CMakeFiles/klient.dir/auth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/klient.dir/auth.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mandi/CLionProjects/klient/auth.cpp > CMakeFiles/klient.dir/auth.cpp.i

CMakeFiles/klient.dir/auth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/klient.dir/auth.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mandi/CLionProjects/klient/auth.cpp -o CMakeFiles/klient.dir/auth.cpp.s

CMakeFiles/klient.dir/send_sock_msg.cpp.o: CMakeFiles/klient.dir/flags.make
CMakeFiles/klient.dir/send_sock_msg.cpp.o: ../send_sock_msg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mandi/CLionProjects/klient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/klient.dir/send_sock_msg.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/klient.dir/send_sock_msg.cpp.o -c /home/mandi/CLionProjects/klient/send_sock_msg.cpp

CMakeFiles/klient.dir/send_sock_msg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/klient.dir/send_sock_msg.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mandi/CLionProjects/klient/send_sock_msg.cpp > CMakeFiles/klient.dir/send_sock_msg.cpp.i

CMakeFiles/klient.dir/send_sock_msg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/klient.dir/send_sock_msg.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mandi/CLionProjects/klient/send_sock_msg.cpp -o CMakeFiles/klient.dir/send_sock_msg.cpp.s

CMakeFiles/klient.dir/auth_msg.cpp.o: CMakeFiles/klient.dir/flags.make
CMakeFiles/klient.dir/auth_msg.cpp.o: ../auth_msg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mandi/CLionProjects/klient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/klient.dir/auth_msg.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/klient.dir/auth_msg.cpp.o -c /home/mandi/CLionProjects/klient/auth_msg.cpp

CMakeFiles/klient.dir/auth_msg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/klient.dir/auth_msg.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mandi/CLionProjects/klient/auth_msg.cpp > CMakeFiles/klient.dir/auth_msg.cpp.i

CMakeFiles/klient.dir/auth_msg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/klient.dir/auth_msg.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mandi/CLionProjects/klient/auth_msg.cpp -o CMakeFiles/klient.dir/auth_msg.cpp.s

# Object files for target klient
klient_OBJECTS = \
"CMakeFiles/klient.dir/main.cpp.o" \
"CMakeFiles/klient.dir/auth.cpp.o" \
"CMakeFiles/klient.dir/send_sock_msg.cpp.o" \
"CMakeFiles/klient.dir/auth_msg.cpp.o"

# External object files for target klient
klient_EXTERNAL_OBJECTS =

klient: CMakeFiles/klient.dir/main.cpp.o
klient: CMakeFiles/klient.dir/auth.cpp.o
klient: CMakeFiles/klient.dir/send_sock_msg.cpp.o
klient: CMakeFiles/klient.dir/auth_msg.cpp.o
klient: CMakeFiles/klient.dir/build.make
klient: CMakeFiles/klient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mandi/CLionProjects/klient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable klient"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/klient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/klient.dir/build: klient

.PHONY : CMakeFiles/klient.dir/build

CMakeFiles/klient.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/klient.dir/cmake_clean.cmake
.PHONY : CMakeFiles/klient.dir/clean

CMakeFiles/klient.dir/depend:
	cd /home/mandi/CLionProjects/klient/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mandi/CLionProjects/klient /home/mandi/CLionProjects/klient /home/mandi/CLionProjects/klient/cmake-build-debug /home/mandi/CLionProjects/klient/cmake-build-debug /home/mandi/CLionProjects/klient/cmake-build-debug/CMakeFiles/klient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/klient.dir/depend

