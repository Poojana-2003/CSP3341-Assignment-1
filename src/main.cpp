#include <iostream>
#include "Dictionary.h"
#include "FileHandler.h"

int main() {
    Dictionary dict;
    FileHandler fh;

    std::string file;
    std::cout << "Enter text file name: ";
    std::cin >> file;

    fh.loadFromFile(file, dict);

    dict.displayTopN(10);
    return 0;
}
