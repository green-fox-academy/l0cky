#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52
    std::cout << "How many hours is spent with coding in a semester by an attendee in Green Fox:" << std::endl;
    std::cout << 17 * 5 * 6 << std::endl;

    std::cout << "The percentage of the coding hours in the semester:" << std::endl;
    std::cout << 5 * 6. / 52 * 100 << "%" << std::endl;

    return 0;
}