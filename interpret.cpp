#include <iostream>
#include <string>
using namespace std;
/**
 * @file interpret.cpp
 * @brief contains the code to tokenize and interpret user input
 * @author Nathan Bockisch
 * @date 04/01/2019
 * @bugs none
 **/

/**
 * Splits an expression into tokens
 * @param in a string expression
 * @return a list of tokens in the form of strings
 **/
string *tokenize(string in)
{
        string symbols = "()+-*/=<>!\'";
        string tokens[in.length()];
        string tmp;
        int count = 0;

        /* Cycle through every char in the input */
        for (int i = 0; i < in.length(); i++) {
                /* Divide the characters into tokens */
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

        cout << "TOKENS" << endl;
        for (int j = 0; j < count; j++) {
                cout << "Here: " << tokens[j] << endl;
        }

        return NULL;
}
