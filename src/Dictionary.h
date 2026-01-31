#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <unordered_map>
#include <string>
#include <vector>
#include "Word.h"

class Dictionary {
private:
    std::unordered_map<std::string, Word> words;

public:
    bool addWord(const std::string& text, const std::string& meaning = "");
    bool searchWord(const std::string& text, Word& outWord) const;

    void displayAllWords() const;
    void displayTopN(int n) const;

    size_t size() const;
    std::vector<Word> toVector() const;
};

#endif
