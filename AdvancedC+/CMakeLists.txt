# CMakeList.txt : CMake project for AdvancedC+, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (AdvancedC+   "function.cxx" "main.cxx" "max_sub.cxx" "merge_sort.cxx" "operator.cxx" "reference.cxx" "sales.cxx" "statement.cxx" "string_using.cxx" "vector_using.cxx" "main.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AdvancedC+ PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
