#include "Word.h"

Word::Word() : text(""), meaning(""), frequency(0) {}

Word::Word(const std::string& t, const std::string& m)
    : text(t), meaning(m), frequency(1) {}

std::string Word::getText() const { return text; }
std::string Word::getMeaning() const { return meaning; }
int Word::getFrequency() const { return frequency; }

void Word::setMeaning(const std::string& m) { meaning = m; }
void Word::incrementFrequency() { frequency++; }
