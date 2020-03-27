//
// Created by Ahmed Mahdy on 17-Mar-20.
//

#include <iostream>
#include <tuple>

using namespace std;

void assignment_operator() {

    //----WRITE YOUR CODE BELOW THIS LINE----
    // Declare num1 as an integer and initialize it to 13.
    int num1{13};

    // Declare num2 as an integer and initialize it to 0.

    int num2{0};
    // Assign the value 5 to num1

    num1 = 5;

    // Assign the value of num1 to num2

    num2 = num1;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << num1 << " " << num2;
}


int arithmetic_operators(int number) {
    int original_number{number};


    //----WRITE YOUR CODE BELOW THIS LINE----

    //-- Multiply number by 2 and assign the result back to number
    number = number * 2;
    //-- Add 9 to number and assign the result back to number
    number = number + 9;

    //-- Subtract 3 from number and assign the result back to number
    number = number - 3;

    //-- Divide number by 2 and assign the result back to number
    number = number / 2;

    //-- Subtract original_number from number and assign the result back to number
    number = number - original_number;

    //-- Take the modulus 3 (%) of number and assign it back to number
    number = number % 3;


    //----WRITE YOUR CODE ABOVE THIS LINE----

    return number;
}


void
logical_operators(int age, bool parental_consent, bool ssn, bool accidents) {

    //----WRITE YOUR CODE BELOW THIS LINE----

    if ((age >= 18 || age > 15 && parental_consent) && ssn
        && !accidents)//WRITE ALL YOUR CODE WITHIN THE PARENTHESES
        cout << "Yes, you can work.";

    //----WRITE YOUR CODE ABOVE THIS LINE----
    return;
}


void section_challenge() {

    int dollars{0};
    const int cents_in_dollar{100};
    int quarters{0};
    const int cents_in_quarter{25};
    int dimes{0};
    const int cents_in_dime{10};
    int nickles{0};
    const int cents_in_nickle{5};
    int pennies{0};

    int entered_number{0};
    cout << "Enter an amount in cents: ";
    cin >> entered_number;

    dollars = entered_number / cents_in_dollar;
    cout << "dollars\t: " << dollars << endl;
    entered_number = entered_number % cents_in_dollar;

    quarters = entered_number / cents_in_quarter;
    cout << "quarters\t: " << quarters << endl;
    entered_number = entered_number % cents_in_quarter;

    dimes = entered_number / cents_in_dime;
    cout << "dimes\t: " << dimes << endl;
    entered_number = entered_number % cents_in_dime;


    nickles = entered_number / cents_in_nickle;
    cout << "nickles\t: " << nickles << endl;
    entered_number = entered_number % cents_in_nickle;


    pennies = entered_number;
    cout << "pennies\t: " << pennies << endl;


    return;
}