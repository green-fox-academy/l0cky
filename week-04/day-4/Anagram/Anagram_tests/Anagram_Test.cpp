#include <iostream>
#include <gtest/gtest.h>
#include "anagram.cpp"

TEST(anagram, emptyStrings){
    //Arrange
    bool result;
    //Act
    result = anagram("", "");
    //Assert
    ASSERT_EQ(result, true);
}

TEST(anagram, differentLongStrings){
    //Arrange
    bool result;
    //Act
    result = anagram("a", "");
    //Assert
    ASSERT_EQ(result, false);
}

TEST(anagram, sameStrings){
    //Arrange
    bool result;
    //Act
    result = anagram("a", "a");
    //Assert
    ASSERT_EQ(result, true);
}

TEST(anagram, moreThanOneLonganagramStrings){
    //Arrange
    bool result;
    //Act
    result = anagram("ab", "ba");
    //Assert
    ASSERT_EQ(result, true);
}

TEST(anagram, listenAndSilentAreAnagrams){
    //Arrange
    bool result;
    //Act
    result = anagram("listen", "silent");
    //Assert
    ASSERT_EQ(result, true);
}

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

