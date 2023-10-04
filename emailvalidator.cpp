/*
File: emailvalidator.cpp
Implements the emailvalidator function
*/

#include "emailvalidator.h"
#include <string>
#include <regex>

bool emailValidator(std::string str) {
    /*
    Regex breakdown:
        there can be no spaces -> [^ ]
        firstName => [a-zA-Z0-9]{1,20}
        . goes between firstName and lastName
        lastName => [a-zA-Z!$&]*
        @ goes between lastName and domain
        domain => [a-z]{1,20}
        . goes between domain and domainExt
        domainExt => [a-z]{1,3}

    */
   std::regex emailReg("[^ ][a-zA-Z0-9]{1,20}.[a-zA-Z&!$]*@[a-z]{1,20}.[a-z]{1,3}");
   
   return std::regex_match(str, emailReg);

}

