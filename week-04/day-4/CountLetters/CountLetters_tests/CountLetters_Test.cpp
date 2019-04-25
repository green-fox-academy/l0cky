#include <iostream>
#include <gtest/gtest.h>
#include "countLetters.cpp"

TEST(contLetters, emptyMapResult) {
    //Arrange
    std::map<std::string, int> result;
    std::map<std::string, int> expected;
    //Act
    result = countLetters("");
    //Assert
    ASSERT_EQ(result, expected);
}

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

