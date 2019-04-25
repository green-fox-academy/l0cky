#!/usr/bin/env bash

PATH_GTEST="/Users/l0cky/GFA/greenfox/c-cpp/googletest"

PROJECT_NAME=$(basename "$PWD")

GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

PROJECT_LIB="${PROJECT_NAME}_lib"
PROJECT_TESTS="${PROJECT_NAME}_tests"

echo -e "Initialize Google gtests for your ${GREEN}${PROJECT_NAME}${NC} CLion project."

if [ -d ".idea" -a -e "main.cpp" ];
then
	echo -e "${RED}This is a CLion project folder.${NC}";
else
	echo -e "This is not a CLion project folder.";
fi

if [ ! -d ${PROJECT_LIB}  ];
then
	mkdir ${PROJECT_LIB};
	echo -e "\tCreated folder: ${GREEN}${PROJECT_LIB}${NC}";
else
	echo -e "\tFolder already exists:\t${RED}${PROJECT_LIB}${NC}";
fi

if [ ! -d ${PROJECT_TESTS} ];
then
	mkdir ${PROJECT_TESTS}
	echo -e "\tCreated folder: ${GREEN}${PROJECT_TESTS}${NC}";
else
	echo -e "\tFolder already exists:\t${RED}${PROJECT_TESTS}${NC}";
fi

LIB_CMAKELIST="${PROJECT_LIB}/CMakeLists.txt"
if [ ! -e ${LIB_CMAKELIST} ];
then

cat <<EOF >$LIB_CMAKELIST
# Add all your .cpp files here (separated by spaces)
add_library(\${PROJECT_LIB_NAME} dummyClass.cpp)
EOF

	touch ${PROJECT_LIB}/dummyClass.cpp;
	echo -e "\tCreated file: ${GREEN}${LIB_CMAKELIST}${NC}";

else
	echo -e "\tFolder already exists:\t${RED}${LIB_CMAKELIST}${NC}";
fi

TESTS_CMAKELIST="${PROJECT_TESTS}/CMakeLists.txt"
TEST_CPP="${PROJECT_NAME}_Test.cpp"
if [ ! -e ${TESTS_CMAKELIST} ];
then

cat <<EOF >$TESTS_CMAKELIST
# This line is for Windows users only
if (WIN32)
	add_compile_definitions(WINVER=0x0500)
endif()

# Add all your .cpp files here (separated by spaces)
add_executable(\${PROJECT_TESTS_NAME} ${TEST_CPP})

# These lines include and link the GoogleTest libraries and your own library to the test executable
add_subdirectory(\${PATH_TO_GOOGLETEST} \${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(\${PATH_TO_GOOGLETEST}/googletest/include)
target_link_libraries(\${PROJECT_TESTS_NAME} gtest gtest_main)
target_link_libraries(\${PROJECT_TESTS_NAME} \${PROJECT_LIB_NAME})
EOF

	echo -e "\tCreated file: ${GREEN}${TESTS_CMAKELIST}${NC}";

else
	echo -e "\tFolder already exists:\t${RED}${TESTS_CMAKELIST}${NC}";
fi

if [ ! -e "${PROJECT_TESTS}/${TEST_CPP}" ];
then

cat <<EOF >"${PROJECT_TESTS}/${TEST_CPP}"
#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

EOF

echo -e "\tCreated file: ${GREEN}${PROJECT_TESTS}/${TEST_CPP}${NC}";

else
	echo -e "\tFolder already exists:\t${RED}${PROJECT_TESTS}/${TEST_CPP}${NC}";
fi

TEST_PROJECT_NAME=$(tail -1 CMakeLists.txt | grep -o "${PROJECT_NAME}")

if [ "${TEST_PROJECT_NAME}" == "${PROJECT_NAME}" ];
then

  # Uncomment if you use Windows
	#sed -i '$d' CMakeLists.txt;

  # Uncomment if you use Mac
	sed -i '' -e '$ d' CMakeLists.txt;

cat <<EOF >>CMakeLists.txt
# Change this to the name of the directory that contains your code
set(PROJECT_LIB_NAME ${PROJECT_LIB})

# Change this to the name of the directory that contains your tests
set(PROJECT_TESTS_NAME ${PROJECT_TESTS})

# Change this to the path where you extracted the Google Test files to
set(PATH_TO_GOOGLETEST "${PATH_GTEST}")

# The next line creates an executable file from main.cpp with the same name as your project
add_executable(\${PROJECT_NAME} main.cpp)

# This block includes the subdirectories containing your code and tests
include_directories(\${PROJECT_LIB_NAME})
add_subdirectory(\${PROJECT_LIB_NAME})
add_subdirectory(\${PROJECT_TESTS_NAME})

# This line links your code to the main executable
target_link_libraries(\${PROJECT_NAME} \${PROJECT_LIB_NAME})

EOF

echo -e "\tChanged file: ${GREEN}CMakeLists.txt${NC}";

else
	echo -e "${RED}\tThe CMakeLists.txt is not the default.${NC}";
fi



exit 0
