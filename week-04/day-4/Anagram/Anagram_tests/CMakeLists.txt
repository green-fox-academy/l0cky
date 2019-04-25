# This line is for Windows users only
if (WIN32)
	add_compile_definitions(WINVER=0x0500)
endif()

# Add all your .cpp files here (separated by spaces)
add_executable(${PROJECT_TESTS_NAME} Anagram_Test.cpp)

# These lines include and link the GoogleTest libraries and your own library to the test executable
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/googletest/include)
target_link_libraries(${PROJECT_TESTS_NAME} gtest gtest_main)
target_link_libraries(${PROJECT_TESTS_NAME} ${PROJECT_LIB_NAME})
