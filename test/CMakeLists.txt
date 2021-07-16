# Put this file in every subdirectory with unit test .cpp files

file(GLOB TEST_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
set(TEST_FILES ${TEST_FILES} ${TEST_SOURCE_FILES} PARENT_SCOPE)
