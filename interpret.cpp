#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
/**
 * @file interpret.cpp
 * @brief contains the code to tokenize and interpret user input
 * @author Nathan Bockisch
 * @date 04/09/2019
 * @bugs none
 **/

/**
 * Splits an expression into tokens
 * @param in a string expression
 * @return a list of tokens in the form of strings
 **/
void tokenize(string in, string *tokens)
{
        string symbols = "()+-*/=<>!\'";
        string tmp;
        int count = 0;

        /* Cycle through every char in the input */
        for (int i = 0; i < in.length(); i++) { /* Divide the characters into tokens */
                if (in[i] == ' ') {
                        /* On space, append what's already in the token, if
                        anything */
                        if (!tmp.empty()) {
                                tokens[count] = tmp;
                                count++;
                                tmp.clear();
                        }
                } else if (symbols.find(in[i]) !=  string::npos) {
                        cout << in[i] << endl;
                        /* If the char is a symbol, add all contents if any of
                        the token to the array and add the symbol to tmp */
                        if (!tmp.empty()) {
                                tokens[count] = tmp;
                                count++;
                                tmp.clear();
                        }
                        tmp += in[i];
                        tokens[count] = tmp;
                        count++;
                        tmp.clear();
                } else {
                        /* If it's a number or a letter, append it to the
                        token */
                        tmp += in[i];
                }
        }

        /* Add any remnant in the tmp array to the tokens list */
        if (!tmp.empty()) {
                tokens[count] = tmp;
                tmp.clear();
        }        
}

/**
 * Parses a lisp expression and returns the result as a string
 * @param tokens a string array with all the tokens of the expression
 * @return a string with the result.
 **/
void parse(string *tokens)
{
        cout << "Memes" << endl;
}
