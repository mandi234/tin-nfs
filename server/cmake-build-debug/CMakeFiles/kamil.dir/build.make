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
CMAKE_COMMAND = /home/azablock/clion-2018.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/azablock/clion-2018.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/azablock/CLionProjects/tin-nfs/server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/kamil.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kamil.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kamil.dir/flags.make

CMakeFiles/kamil.dir/main.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kamil.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/main.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/main.cpp

CMakeFiles/kamil.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/main.cpp > CMakeFiles/kamil.dir/main.cpp.i

CMakeFiles/kamil.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/main.cpp -o CMakeFiles/kamil.dir/main.cpp.s

CMakeFiles/kamil.dir/proto.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/proto.cpp.o: ../proto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/kamil.dir/proto.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/proto.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/proto.cpp

CMakeFiles/kamil.dir/proto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/proto.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/proto.cpp > CMakeFiles/kamil.dir/proto.cpp.i

CMakeFiles/kamil.dir/proto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/proto.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/proto.cpp -o CMakeFiles/kamil.dir/proto.cpp.s

CMakeFiles/kamil.dir/auth.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/auth.cpp.o: ../auth.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/kamil.dir/auth.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/auth.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/auth.cpp

CMakeFiles/kamil.dir/auth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/auth.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/auth.cpp > CMakeFiles/kamil.dir/auth.cpp.i

CMakeFiles/kamil.dir/auth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/auth.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/auth.cpp -o CMakeFiles/kamil.dir/auth.cpp.s

CMakeFiles/kamil.dir/open.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/open.cpp.o: ../open.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/kamil.dir/open.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/open.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/open.cpp

CMakeFiles/kamil.dir/open.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/open.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/open.cpp > CMakeFiles/kamil.dir/open.cpp.i

CMakeFiles/kamil.dir/open.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/open.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/open.cpp -o CMakeFiles/kamil.dir/open.cpp.s

CMakeFiles/kamil.dir/operation.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/operation.cpp.o: ../operation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/kamil.dir/operation.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/operation.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/operation.cpp

CMakeFiles/kamil.dir/operation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/operation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/operation.cpp > CMakeFiles/kamil.dir/operation.cpp.i

CMakeFiles/kamil.dir/operation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/operation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/operation.cpp -o CMakeFiles/kamil.dir/operation.cpp.s

CMakeFiles/kamil.dir/user/user.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/user/user.cpp.o: ../user/user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/kamil.dir/user/user.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/user/user.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/user/user.cpp

CMakeFiles/kamil.dir/user/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/user/user.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/user/user.cpp > CMakeFiles/kamil.dir/user/user.cpp.i

CMakeFiles/kamil.dir/user/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/user/user.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/user/user.cpp -o CMakeFiles/kamil.dir/user/user.cpp.s

CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.o: ../open_handlers/open_msg_handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/open_handlers/open_msg_handler.cpp

CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/open_handlers/open_msg_handler.cpp > CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.i

CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/open_handlers/open_msg_handler.cpp -o CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.s

CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.o: CMakeFiles/kamil.dir/flags.make
CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.o: ../operation_handlers/operation_msg_handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.o -c /home/azablock/CLionProjects/tin-nfs/server/operation_handlers/operation_msg_handler.cpp

CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azablock/CLionProjects/tin-nfs/server/operation_handlers/operation_msg_handler.cpp > CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.i

CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azablock/CLionProjects/tin-nfs/server/operation_handlers/operation_msg_handler.cpp -o CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.s

# Object files for target kamil
kamil_OBJECTS = \
"CMakeFiles/kamil.dir/main.cpp.o" \
"CMakeFiles/kamil.dir/proto.cpp.o" \
"CMakeFiles/kamil.dir/auth.cpp.o" \
"CMakeFiles/kamil.dir/open.cpp.o" \
"CMakeFiles/kamil.dir/operation.cpp.o" \
"CMakeFiles/kamil.dir/user/user.cpp.o" \
"CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.o" \
"CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.o"

# External object files for target kamil
kamil_EXTERNAL_OBJECTS =

kamil: CMakeFiles/kamil.dir/main.cpp.o
kamil: CMakeFiles/kamil.dir/proto.cpp.o
kamil: CMakeFiles/kamil.dir/auth.cpp.o
kamil: CMakeFiles/kamil.dir/open.cpp.o
kamil: CMakeFiles/kamil.dir/operation.cpp.o
kamil: CMakeFiles/kamil.dir/user/user.cpp.o
kamil: CMakeFiles/kamil.dir/open_handlers/open_msg_handler.cpp.o
kamil: CMakeFiles/kamil.dir/operation_handlers/operation_msg_handler.cpp.o
kamil: CMakeFiles/kamil.dir/build.make
kamil: CMakeFiles/kamil.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable kamil"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kamil.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kamil.dir/build: kamil

.PHONY : CMakeFiles/kamil.dir/build

CMakeFiles/kamil.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kamil.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kamil.dir/clean

CMakeFiles/kamil.dir/depend:
	cd /home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/azablock/CLionProjects/tin-nfs/server /home/azablock/CLionProjects/tin-nfs/server /home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug /home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug /home/azablock/CLionProjects/tin-nfs/server/cmake-build-debug/CMakeFiles/kamil.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kamil.dir/depend

