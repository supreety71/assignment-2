#include <iostream>
#include <cmath>    
using namespace std;

int main()
{
    double AB, BC, AC;

    cout << "Enter the length of side AB: ";
    cin >> AB;

    cout << "Enter the length of side BC: ";
    cin >> BC;

    cout << "Enter the length of side AC: ";
    cin >> AC;

    if ( (AB + BC > AC) && (AB + AC > BC) && (BC + AC > AB) )
    {
        cout << "\nThese values CAN form a triangle." << endl;

        double S = (AB + BC + AC) / 2;

        double area = sqrt( S * (S - AB) * (S - BC) * (S - AC) );

        cout << "The area of the triangle is: " << area << endl;
    }
    else
    {
        cout << "\nThese values CANNOT form a triangle." << endl;
    }

    return 0;
}