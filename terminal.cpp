#include <iostream>
#include <string>
#include <stdlib.h>
#include "interpret.h"
using namespace std;
/**
 * @file terminal.cpp
 * @brief Contains the code to read in and write out data
 * @author Nathan Bockisch
 * @date 04/09/2019
 * @bugs none
 **/

/**
 * Provides the interface for user input
 **/
 void input() 
 {
        string in;
        string *tokens;
        /* Read in input */
        while (true) {
                cout << "> ";
                getline(cin, in);
                tokens = (string *) malloc(sizeof(string) * in.length());
                tokenize(in, tokens);
                parse(tokens);
                free(tokens);
        }
 }
