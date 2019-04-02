#include <iostream>
#include <string>
#include "interpret.h"
using namespace std;
/**
 * @file terminal.cpp
 * @brief Contains the code to read in and write out data
 * @author Nathan Bockisch
 * @date 04/01/2019
 * @bugs none
 **/

/**
 * Provides the interface for user input
 **/
 void input() 
 {
        string in;

        /* Read in input */
        while (true) {
                cout << "> ";
                cin >> in;
                tokenize(in);
        }
 }
