# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DokanOnlineMarket_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DokanOnlineMarket_autogen.dir\\ParseCache.txt"
  "DokanOnlineMarket_autogen"
  )
endif()
