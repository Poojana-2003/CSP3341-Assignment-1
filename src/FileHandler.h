#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include "Dictionary.h"

class FileHandler {
public:
    bool loadFromFile(const std::string& filename, Dictionary& dict) const;
};

#endif
