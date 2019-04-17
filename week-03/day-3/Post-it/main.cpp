#include <iostream>
#include <vector>
#include "PostIt.h"

int main()
{
    PostIt postOneWithDefault;
    PostIt postTwo("orange", "Idea 1", "blue");
    PostIt postThree("pink", "Awesome", "black");
    PostIt postFour("yellow", "Superb!", "green");

    std::vector<PostIt> posts;
    posts.push_back(postOneWithDefault);
    posts.push_back(postTwo);
    posts.push_back(postThree);
    posts.push_back(postFour);

    for (int i = 0; i < posts.size(); ++i) {
        std::cout << "Post: " << i + 1 << std::endl;
        std::cout << "Background:\t\t" << posts.at(i).getBackgroundColor() << std::endl;
        std::cout << "Text:\t\t\t" << posts.at(i).getText() << std::endl;
        std::cout << "Textcolor:\t\t" << posts.at(i).getTextColor() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}