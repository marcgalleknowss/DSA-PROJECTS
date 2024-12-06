# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DSA-gui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DSA-gui_autogen.dir\\ParseCache.txt"
  "DSA-gui_autogen"
  )
endif()
