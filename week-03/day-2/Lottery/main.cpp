#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

void convertVec(std::vector<std::string> *vecIn, std::vector<std::vector<std::string>> *vecOut);

void getLotteryNumber(std::vector<std::vector<std::string>> *vecIn, std::map<std::string, int> *lotMap);

std::pair<std::string, int> getMostFreqNum(std::map<std::string, int> &numMap);

void getMostFiveFreqNum(std::map<std::string, int> &numMap);

void printPair(const std::pair<std::string, int> &pPair);

int main()
{
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::badbit);

    std::vector<std::string> lines;
    std::vector<std::vector<std::string>> vecVec;
    std::map<std::string, int> lotteryMap;

    try {
        myFile.open("../lottery.csv");

        std::string line;

        while (std::getline(myFile, line)) {
            lines.push_back(line);
        }


        myFile.close();
    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
    
    convertVec(&lines, &vecVec);
    getLotteryNumber(&vecVec, &lotteryMap);

    getMostFiveFreqNum(lotteryMap);

    return 0;
}

void convertVec(std::vector<std::string> *vecIn, std::vector<std::vector<std::string>> *vecOut)
{
    std::string unit;
    std::vector<std::string> tempVec;

    for (auto &it : *vecIn) {
        std::istringstream ss(it);
        while (std::getline(ss, unit, ';')) {
            tempVec.push_back(unit);
        }
        vecOut->push_back(tempVec);
        tempVec.clear();
    }
}

void getLotteryNumber(std::vector<std::vector<std::string>> *vecIn, std::map<std::string, int> *lotMap)
{
    for (auto &it : *vecIn) {
        for (auto iter = it.begin() + 11; iter != it.end(); ++iter) {
            (*lotMap)[*iter]++;
        }
    }
}


std::pair<std::string, int> getMostFreqNum(std::map<std::string, int> &numMap)
{
    int max = 0;
    std::string maxStr;

    for (const auto &it : numMap) {
        if (it.second > max) {
            max = it.second;
            maxStr = it.first;
        }
    }
    return std::make_pair(maxStr, max);
}

void printPair(const std::pair<std::string, int> &pPair)
{
    std::cout << pPair.first << ": " << pPair.second << std::endl;

}

void getMostFiveFreqNum(std::map<std::string, int> &numMap)
{
    for (int i = 0; i < 5; ++i) {
        std::pair<std::string, int> tempPair = getMostFreqNum(numMap);
        printPair(tempPair);
        numMap.erase(numMap.find(tempPair.first));
    }
}
