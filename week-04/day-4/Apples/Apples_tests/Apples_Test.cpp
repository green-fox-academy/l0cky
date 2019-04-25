#include <iostream>
#include <gtest/gtest.h>
#include "apple.cpp"



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

TEST(sumFunction, returnWithExpectedSum) {
    // Arrange
    std::vector<int> temp{0,1,2,3,4};
    //Act
    int result = sum(temp);
    //Assert
    ASSERT_EQ(result, 10);
}

TEST(sumFunction, emptyVectorInParameter) {
    // Arrange
    std::vector<int> temp{};
    //Act
    int result = sum(temp);
    //Assert
    ASSERT_EQ(result, 0);
}

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

