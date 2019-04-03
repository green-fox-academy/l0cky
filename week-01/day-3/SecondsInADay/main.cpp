#include <iostream>

int main(int argc, char *args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables
    int totalSeconds = 24 * 60 * 60;

    std::cout << totalSeconds - (((currentHours * 60) + currentMinutes) * 60 + currentSeconds);

    return 0;
}