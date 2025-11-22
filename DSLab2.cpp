
#include <iostream>
using namespace std;

int main() {

    const int number = 3813152;
    int left = 3813; 
    int right = 152;
    int total = left + right;
    int difference = left - right;
    int product = left * right;
    int division = left / right;
    int leftover = left % right;
    double upper = left;
    double lower = right;
    double ratio = upper / lower;

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
