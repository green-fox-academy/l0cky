#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create a two dimensional array
    //   which can contain the different shades of specified colors
    // - In `colors[0]` store the shades of green:
    //   `"lime", "forest green", "olive", "pale green", "spring green"`
    // - In `colors[1]` store the shades of red:
    //   `"orange red", "red", "tomato"`
    // - In `colors[2]` store the shades of pink:
    //   `"orchid", "violet", "pink", "hot pink"`
    std::string colors[3][5] = {
            {"lime", "forest green", "olive", "pale green", "spring green"},
            {"orange red", "red", "tomato", "", ""},
            {"orchid", "violet", "pink", "hot pink", ""}
    };

    return 0;
}