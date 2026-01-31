#include "FileHandler.h"
#include <fstream>
#include <iostream>
#include <cctype>

bool FileHandler::loadFromFile(const std::string& filename, Dictionary& dict) const {
    std::ifstream in(filename);
    if (!in) {
        std::cout << "File open error\n";
        return false;
    }

    std::string word;
    while (in >> word) {
        for (char& c : word) c = std::tolower(c);
        dict.addWord(word);
    }
    return true;
}
