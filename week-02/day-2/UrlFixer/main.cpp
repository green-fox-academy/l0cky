#include <iostream>
#include <string>

int main(int argc, char *args[]) {
    std::string url("https//www.reddit.com/r/nevertellmethebots");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!
    std::string badText("bots");
    std::string goodText("odds");
    url.replace(url.find(badText), badText.size(), goodText);

    std::string protocol("https");
    std::string mandComp("://");

    if (url.find(mandComp) != 0) {
        url.replace(url.find(protocol) + protocol.size(), url.find("www") - 1, mandComp);
        std::cout << url.find(protocol) + protocol.size() << std::endl;
    }

    std::cout << url << std::endl;

    return 0;
}