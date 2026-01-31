#ifndef WORD_H
#define WORD_H

#include <string>

class Word {
private:
    std::string text;
    std::string meaning;
    int frequency;

public:
    Word();
    Word(const std::string& t, const std::string& m = "");

    std::string getText() const;
    std::string getMeaning() const;
    int getFrequency() const;

    void setMeaning(const std::string& m);
    void incrementFrequency();
};

#endif
