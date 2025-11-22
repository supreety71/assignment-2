// COSC-1436 – Lab Assignment 2
// Programming Exercise: Student ID Number Program
// Replace YOUR_NAME_HERE and YOUR_7_DIGIT_ID with your real details before submitting.
//
// Student: Ajay Shrestha
// Name and solution comment included per instructions.

#include <iostream>
using namespace std;

int main() {
    // 1) number initialized to your 7-digit student ID
    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    // TODO: Replace 1234567 with YOUR actual 7-digit Student ID (no leading zeros).
    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    const int number = 3815443;

    // 2) left = four left-most digits of number
    int left = 3815;

    // 3) right = three right-most digits of number (int naturally omits leading zeros)
    int right = 443;

    // 4) total = left + right
    int total = left + right;

    // 5) difference = left - right
    int difference = left - right;

    // 6) product = left * right
    int product = left * right;

    // 7) division = left / right (integer division)
     int division = left / right;

    // 8) leftover = left % right (modulus)
    int leftover = left % right; 

    // 9) upper = left as double
    double upper = left;

    // 10) lower = right as double
     double lower = right;

    // 11) ratio = upper / lower
    double ratio = upper / lower;

    // 12) Display names and values, one per line
    cout << "number = "     << number     << endl;
    cout << "left = "       << left       << endl;
    cout << "right = "      << right      << endl;
    cout << "total = "      << total      << endl;
    cout << "difference = " << difference << endl;
    cout << "product = "    << product    << endl;
    cout << "division = "   << division   << endl;
    cout << "leftover = "   << leftover   << endl;
    cout << "upper = "      << upper      << endl;
    cout << "lower = "      << lower      << endl;
    cout << "ratio = "      << ratio      << endl;

    return 0;
}
