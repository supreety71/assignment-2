//Increment / Decrement
//Prefix (++x/--x): Change the value first, then use it,
//Postfix (x++/x--): Use the value first, then change it

#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 5;
    cout<<"Prefix Increment: "<< ++a << endl; // a becomes 6, then used
    cout<<"Postfix Increment: "<< b++ << endl; // b used as 5
    cout<<"Prefix Decrement: "<< --a << endl; // a becomes 5, then used
    cout<<"Postfix Decrement: "<< b-- << endl; // b used as 6
    return 0;
}