# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CaloryCounter_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CaloryCounter_autogen.dir\\ParseCache.txt"
  "CaloryCounter_autogen"
  )
endif()
