#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    int age;
    double mhr;
    double zone1_low, zone1_high;
    double zone2_low, zone2_high;
    double zone3_low;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your age: ";
    cin >> age;

    // Calculate MHR
    mhr = 206.9 - (0.67 * age);

    cout << "Hi " << firstName << ", your maximum heart rate is " << mhr << endl;

    return 0;
}
