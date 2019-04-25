#include <iostream>
#include <gtest/gtest.h>

std::string getApple(std::string name ="apple")
{
    return name;
}

TEST(getAppleFunction, returnsAppleString) {
    // Arrange
    std::string result = getApple();

    //Act

    //Assert
    ASSERT_EQ(result, "apple");
}

TEST(getAppleFunction, returnsTheParameterAsString) {
    // Arrange
    std::string result = getApple("banana");

    //Act

    //Assert
    ASSERT_EQ(result, "banana");
}

TEST(getAppleFunction, faildWithDefault){
    // Arrange
    std::string result = getApple();

    //Act

    //Assert
    ASSERT_NE(result, "banana");
}

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

