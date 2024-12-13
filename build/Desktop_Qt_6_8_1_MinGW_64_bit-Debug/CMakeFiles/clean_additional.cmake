# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Classes_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Classes_autogen.dir\\ParseCache.txt"
  "Classes_autogen"
  )
endif()
