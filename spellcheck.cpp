/*
File: spellcheck.cpp
Implements the spellcheck function outlined in spellcheck.h
*/
#include "spellcheck.h"
#include <string>
#include <regex>
#include <iostream>

/*
Implementation notes: 
    This literal 3 line method took me an embarassingly long amount of time to finish. I'm unsure if my usage was wrong, or something else,
    but for a long period of time, I attempted to use [ ]$ to qualify the string as requiring to end with a space, which
    made me completely unable to match the regex. Unsure if this is just a problem on my machine, or if I was using it wrong.
*/
std::string spellCheck(std::string str, std::string studentName) {
    /*
    Attempt at non-hardcoded solution:

    std::string firstPart = studentName.substr(0, 4); // should grab the first 4 letters
    std::regex wrongName("(" + firstPart + ")[a-zA-Z]*[.!? ]");
    */
    // Hardcoded regex according to instructions
    std::regex wrongName ("(B|b)art[a-zA-Z]*[ ]");

    return std::regex_replace(str, wrongName, studentName + " ");
}