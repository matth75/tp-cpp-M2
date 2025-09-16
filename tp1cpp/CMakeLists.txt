# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(PROJECT_NAME tp1cpp)
project (${PROJECT_NAME})

# Include sub-projects.
add_subdirectory (${PROJECT_NAME})

# Options de compilation selon le compilateur
if (MSVC)
    # MSVC : /W4 = niveau d'avertissements recommandé (équivalent -Wall)
    target_compile_options(${PROJECT_NAME} PRIVATE /W3 /permissive-)
else()
    # GCC / Clang
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)
endif()