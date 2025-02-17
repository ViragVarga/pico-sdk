# NOTE: THIS IS A WIP ONLY PICO_ARM_GCC IS CURRENTLY SUPPORTED
# todo there is probably a more "cmake" way of doing this going thru the standard path with our "PICO" platform
#  i.e. CMake<Lang>Information and whatnot
include(${CMAKE_CURRENT_LIST_DIR}/find_compiler.cmake)

# include our Platform/pico.cmake
set(CMAKE_SYSTEM_NAME PICO)
set(CMAKE_SYSTEM_PROCESSOR cortex-m0plus)

# Find CLANG
pico_find_compiler(PICO_COMPILER_CC clang)
pico_find_compiler(PICO_COMPILER_CXX clang)
#pico_find_compiler(PICO_COMPILER_ASM armasm)
set(PICO_COMPILER_ASM "${PICO_COMPILER_CC}" CACHE INTERNAL "")
pico_find_compiler(PICO_OBJCOPY llvm-objcopy)
pico_find_compiler(PICO_OBJDUMP llvm-objdump)

# Specify the cross compiler.
set(CMAKE_C_COMPILER ${PICO_COMPILER_CC} CACHE FILEPATH "C compiler")
set(CMAKE_CXX_COMPILER ${PICO_COMPILER_CXX} CACHE FILEPATH "C++ compiler")
set(CMAKE_C_OUTPUT_EXTENSION .o)

# todo should we be including CMakeASMInformation anyway - i guess that is host side
set(CMAKE_ASM_COMPILER ${PICO_COMPILER_ASM} CACHE FILEPATH "ASM compiler")
set(CMAKE_ASM_COMPILE_OBJECT "<CMAKE_ASM_COMPILER> <DEFINES> <INCLUDES> <FLAGS> -o <OBJECT>   -c <SOURCE>")
set(CMAKE_INCLUDE_FLAG_ASM "-I")
set(CMAKE_OBJCOPY ${PICO_OBJCOPY} CACHE FILEPATH "")
set(CMAKE_OBJDUMP ${PICO_OBJDUMP} CACHE FILEPATH "")

# Disable compiler checks.
set(CMAKE_C_COMPILER_FORCED TRUE)
set(CMAKE_CXX_COMPILER_FORCED TRUE)

# Add target system root to cmake find path.
get_filename_component(PICO_COMPILER_DIR "${PICO_COMPILER_CC}" DIRECTORY)
get_filename_component(CMAKE_FIND_ROOT_PATH "${PICO_COMPILER_DIR}" DIRECTORY)

# Look for includes and libraries only in the target system prefix.
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

include_directories(/usr/include/newlib)

# todo move to platform/Generix-xxx
set(ARM_CLANG_COMMON_FLAGS " --target=arm-none-eabi -mcpu=cortex-m0plus -mthumb")
set(CMAKE_C_FLAGS_INIT "${ARM_CLANG_COMMON_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT "${ARM_CLANG_COMMON_FLAGS}")
set(CMAKE_ASM_FLAGS_INIT "${ARM_CLANG_COMMON_FLAGS}")
set(CMAKE_C_FLAGS_DEBUG_INIT "${ARM_CLANG_COMMON_FLAGS} -Og")
set(CMAKE_CXX_FLAGS_DEBUG_INIT "${ARM_CLANG_COMMON_FLAGS} -Og")

