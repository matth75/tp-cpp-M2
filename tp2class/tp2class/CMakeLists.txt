# CMakeList.txt : CMake project for tp2class, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (tp2class "tp2class.cpp" "tp2class.h" "src/Chaine.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET tp2class PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
