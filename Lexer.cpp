//  main.cpp
//  lexemeSeparator
//
//  Created by Nathan Osterberg on 9/25/18.
//  Copyright © 2018 Nathan Osterberg. All rights reserved.
//
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    unsigned int x;
    string thisString = "This string needs to be broken down into lexemes.";
    x = thisString.length();                        // sets size of temp char array
    char *lexeme;                                   // ptr to lexeme
    lexeme = new char[thisString[x]];               // dynamic character array to be set to string
    for (int i = 0; i < thisString.length(); i++)   // loop iterates through string
    {
        if (!isspace(thisString[i]))                // checks for space
        {
            lexeme[i] = thisString[i];              // lexeme value and string value mirror each other
            cout << lexeme[i];
        }
        else
        {
            cout << endl;
        }
    }
    delete lexeme;                                  // frees memory
    cout << endl;    
    return 0;
}
