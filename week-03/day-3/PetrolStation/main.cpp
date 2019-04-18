#include <iostream>
#include "station.h"
#include "car.h"

int main()
{
    Station stationOregon("Oregon");
    Station stationChicago("Chicago");

    Car car1("Car1");
    Car car2("Car2");
    Car car3("Car3");
    Car car4("Car4");
    Car car5("Car5");

    stationChicago.fill(car1);
    std::cout << std::endl;

    stationChicago.fill(car2);
    std::cout << std::endl;

    stationChicago.fill(car3);
    std::cout << std::endl;

    stationOregon.fill(car3);
    std::cout << std::endl;

    std::cout << stationOregon.toString() << std::endl;
    std::cout << stationChicago.toString() << std::endl;
    std::cout << std::endl;

    std::cout << car1.toString() << std::endl;
    std::cout << car2.toString() << std::endl;
    std::cout << car3.toString() << std::endl;
    std::cout << car4.toString() << std::endl;
    std::cout << car5.toString() << std::endl;


    return 0;
}