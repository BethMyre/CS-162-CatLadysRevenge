/*******************************************************************************
 ** Author: Beth Myre
 ** Date: February 2019
 ** Description:  This is the implementation file of the intValidate function.
 * This function takes two integers as parameters and tests whether the input
 * entered by the user is an integer that falls in between those two numbers (or is equal to
 * either of them). The lower integer should be entered as the first parameter. If the user enters
 * an integer outside of the specified range, or enters something other than an integer, the function
 * prompts the user for new input.
*******************************************************************************/

#include "intValidate.hpp"
#include <iostream>
#include <string>
#include <sstream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::stringstream;

int intValidate(int minimum, int maximum) {
    int min = minimum;
    int max = maximum;
    string input;               //temporary storage for user input
    int x = 0;                  //integer to be entered by the user
    bool requirements = 0;      //Boolean flag for do-while loop.  Start at false.
    bool allDigits = 1;         //Boolean flag for whether string contains only 0-9.  Start at true.
    int stringLength;

    do {
        allDigits = 1;
        getline (cin, input);

        //If string is not empty
        if(!input.empty()) {


            //Get length of string
            stringLength = input.size();

            //If there is only one character in the string, check whether it's a digit
            if (stringLength == 1){
                if (!isdigit(input[0])) {
                    allDigits = 0;
                }
            }
                //If there's more than one character, allow a negative sign as the first character
            else {
                bool first = 1;
                bool rest = 1;
                for (int i = 0; i < (int) input.size(); i++) {
                    if(i == 0){
                        if( (input[i] != '-') && (!isdigit(input[i]))){
                            first = 0;
                        }
                    }
                    else if (!isdigit(input[i])) {
                        rest = 0;
                    }
                }
                if (first == 0 || rest == 0){
                    allDigits = 0;
                }
            }

            //If string contains only 0 through 9
            if (allDigits == 1) {
                //Use a stringstream to convert the input string to an integer
                //and set x equal to the integer.
                stringstream ssinput(input);
                ssinput >> x;
                //If x is in the correct range
                if (x >= min && x <= max) {
                    //Once all of these conditions have been met, set requirements flag to true.
                    requirements = true;
                }
                else {
                    cout << "Please enter a valid number." << endl;
                }
            }
            else {
                cout << "Please enter a valid number." << endl;
            }
        }
        else {
            cout << "Please enter a valid number." << endl;
        }
    } while (!requirements);

    return x;
}
