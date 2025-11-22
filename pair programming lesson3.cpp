#include <iostream>
#include <iomanip>  
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


    mhr = 206.9 - (0.67 * age);

    zone1_low = 0.60 * mhr;
    zone1_high = 0.70 * mhr;
    zone2_low = 0.70 * mhr;
    zone2_high = 0.80 * mhr;
    zone3_low = 0.80 * mhr;

    cout << fixed << setprecision(2);  
    cout << "\nHeart Rate Zones for " << firstName << ", Age " << age << endl;
    cout << "Maximum Heart Rate is " << mhr << endl;
    cout << "Zone 1: " << zone1_low << " to " << zone1_high 
         << " (Weight Loss, Building Endurance)" << endl;
    cout << "Zone 2: " << zone2_low << " to " << zone2_high 
         << " (Weight Management, Improving Cardio Fitness)" << endl;
    cout << "Zone 3: more than " << zone3_low 
         << " (Interval Workouts)" << endl;

    return 0;
}