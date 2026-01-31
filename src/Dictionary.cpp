#include "Dictionary.h"
#include <iostream>
#include <algorithm>

bool Dictionary::addWord(const std::string& text, const std::string& meaning) {
    if (text.empty()) return false;

    auto it = words.find(text);
    if (it == words.end()) {
        words.emplace(text, Word(text, meaning));
    } else {
        it->second.incrementFrequency();
    }
    return true;
}

bool Dictionary::searchWord(const std::string& text, Word& outWord) const {
    auto it = words.find(text);
    if (it == words.end()) return false;
    outWord = it->second;
    return true;
}

void Dictionary::displayAllWords() const {
    for (const auto& p : words) {
        std::cout << p.second.getText()
                  << " | freq: " << p.second.getFrequency() << "\n";
    }
}

void Dictionary::displayTopN(int n) const {
    std::vector<Word> v = toVector();
    std::sort(v.begin(), v.end(),
        [](const Word& a, const Word& b) {
            return a.getFrequency() > b.getFrequency();
        });

    for (int i = 0; i < n && i < (int)v.size(); i++) {
        std::cout << v[i].getText()
                  << " (" << v[i].getFrequency() << ")\n";
    }
}

size_t Dictionary::size() const {
    return words.size();
}

std::vector<Word> Dictionary::toVector() const {
    std::vector<Word> v;
    for (const auto& p : words) {
        v.push_back(p.second);
    }
    return v;
}
