# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /tmp/tmp.OU6UX9xVMo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.OU6UX9xVMo/cmake-build-cmk-docker

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /tmp/tmp.OU6UX9xVMo/cmake-build-cmk-docker/CMakeFiles /tmp/tmp.OU6UX9xVMo/cmake-build-cmk-docker/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /tmp/tmp.OU6UX9xVMo/cmake-build-cmk-docker/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named PS5

# Build rule for target.
PS5: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 PS5
.PHONY : PS5

# fast build rule for target.
PS5/fast:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/build
.PHONY : PS5/fast

errors.o: errors.c.o

.PHONY : errors.o

# target to build an object file
errors.c.o:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/errors.c.o
.PHONY : errors.c.o

errors.i: errors.c.i

.PHONY : errors.i

# target to preprocess a source file
errors.c.i:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/errors.c.i
.PHONY : errors.c.i

errors.s: errors.c.s

.PHONY : errors.s

# target to generate assembly for a file
errors.c.s:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/errors.c.s
.PHONY : errors.c.s

main.o: main.c.o

.PHONY : main.o

# target to build an object file
main.c.o:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/main.c.o
.PHONY : main.c.o

main.i: main.c.i

.PHONY : main.i

# target to preprocess a source file
main.c.i:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/main.c.i
.PHONY : main.c.i

main.s: main.c.s

.PHONY : main.s

# target to generate assembly for a file
main.c.s:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/main.c.s
.PHONY : main.c.s

node.o: node.c.o

.PHONY : node.o

# target to build an object file
node.c.o:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/node.c.o
.PHONY : node.c.o

node.i: node.c.i

.PHONY : node.i

# target to preprocess a source file
node.c.i:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/node.c.i
.PHONY : node.c.i

node.s: node.c.s

.PHONY : node.s

# target to generate assembly for a file
node.c.s:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/node.c.s
.PHONY : node.c.s

rpn-converter.o: rpn-converter.c.o

.PHONY : rpn-converter.o

# target to build an object file
rpn-converter.c.o:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/rpn-converter.c.o
.PHONY : rpn-converter.c.o

rpn-converter.i: rpn-converter.c.i

.PHONY : rpn-converter.i

# target to preprocess a source file
rpn-converter.c.i:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/rpn-converter.c.i
.PHONY : rpn-converter.c.i

rpn-converter.s: rpn-converter.c.s

.PHONY : rpn-converter.s

# target to generate assembly for a file
rpn-converter.c.s:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/rpn-converter.c.s
.PHONY : rpn-converter.c.s

rpn.o: rpn.c.o

.PHONY : rpn.o

# target to build an object file
rpn.c.o:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/rpn.c.o
.PHONY : rpn.c.o

rpn.i: rpn.c.i

.PHONY : rpn.i

# target to preprocess a source file
rpn.c.i:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/rpn.c.i
.PHONY : rpn.c.i

rpn.s: rpn.c.s

.PHONY : rpn.s

# target to generate assembly for a file
rpn.c.s:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/rpn.c.s
.PHONY : rpn.c.s

stack.o: stack.c.o

.PHONY : stack.o

# target to build an object file
stack.c.o:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/stack.c.o
.PHONY : stack.c.o

stack.i: stack.c.i

.PHONY : stack.i

# target to preprocess a source file
stack.c.i:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/stack.c.i
.PHONY : stack.c.i

stack.s: stack.c.s

.PHONY : stack.s

# target to generate assembly for a file
stack.c.s:
	$(MAKE) -f CMakeFiles/PS5.dir/build.make CMakeFiles/PS5.dir/stack.c.s
.PHONY : stack.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... PS5"
	@echo "... edit_cache"
	@echo "... errors.o"
	@echo "... errors.i"
	@echo "... errors.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... node.o"
	@echo "... node.i"
	@echo "... node.s"
	@echo "... rpn-converter.o"
	@echo "... rpn-converter.i"
	@echo "... rpn-converter.s"
	@echo "... rpn.o"
	@echo "... rpn.i"
	@echo "... rpn.s"
	@echo "... stack.o"
	@echo "... stack.i"
	@echo "... stack.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

