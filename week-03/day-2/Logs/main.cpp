#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

bool isIpAdress(const std::string &word);

void printIpAddresses(std::vector<std::string> *ipAddresses);

void deleteMultipleIpAddresses(std::vector<std::string> *ipAddresses);

bool isGetOrPost(const std::string &word);

void getPostRatio(std::map<std::string, int> *getsPosts);

int main()
{

    std::ifstream myFile;
    myFile.exceptions(std::ifstream::badbit);

    std::vector<std::string> ipAddresses;

    std::map<std::string, int> getsPosts;

    try {
        myFile.open("../log.txt");

        std::string line;

        while (std::getline(myFile, line)) {

            std::istringstream ss(line);
            std::string word;

            while (std::getline(ss, word, ' ')) {
                if (isIpAdress(word)) {
                    ipAddresses.push_back(word);
                } else if (isGetOrPost(word)) {
                    getsPosts[word]++;
                }
            }
        }

        myFile.close();
    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }

    printIpAddresses(&ipAddresses);

    std::cout << "-----------" << std::endl;

    deleteMultipleIpAddresses(&ipAddresses);

    printIpAddresses(&ipAddresses);

    getPostRatio(&getsPosts);

    return 0;
}

bool isIpAdress(const std::string &word)
{
    return word.size() == 11;
}

void printIpAddresses(std::vector<std::string> *ipAddresses)
{
    for (auto &it : *ipAddresses) {
        std::cout << it << std::endl;
    }
}

void deleteMultipleIpAddresses(std::vector<std::string> *ipAddresses)
{
    std::sort(ipAddresses->begin(), ipAddresses->end());
    auto last = std::unique(ipAddresses->begin(), ipAddresses->end());
    ipAddresses->erase(last, ipAddresses->end());
}

bool isGetOrPost(const std::string &word)
{
    return word == "GET" or word == "POST";
}

void getPostRatio(std::map<std::string, int> *getsPosts)
{
    int gets = getsPosts->at("GET");
    int posts = getsPosts->at("POST");

    std::cout << "GET\t|\tPOST\t|\tSUM\t|\tRATIO (GET/POST)\n-------------------------------------\n";
    std::cout << gets << "\t|\t" << posts << "\t\t|\t" << gets + posts << "\t|\t" << (double) gets / (double) posts;
}
