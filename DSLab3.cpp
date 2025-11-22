#include <iostream>
using namespace std;

int main() {
    double cookiesInBag = 42.0;
    double servingsInBag = 6.0;
    double caloriesPerServing = 250.0;

    double caloriesPerCookie = (caloriesPerServing * servingsInBag) / cookiesInBag;

    double cookiesEaten;
    cout << "Enter the number of cookies you ate: ";
    cin >> cookiesEaten;

    double totalCalories = cookiesEaten * caloriesPerCookie;

    cout << "You consumed " << totalCalories << " calories." << endl;

    return 0;
}