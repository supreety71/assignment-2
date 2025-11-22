#include<iostream>
#include<string>
using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     cout <<"Addition of two numbers is: "<<a+b<<endl;
//     cout <<"Subtraction of two numbers is: "<<a-b<<endl;
//     cout <<"Multiplication of two numbers is: "<<a*b<<endl;
//     cout <<"Division of two numbers is: "<<a/b<<endl;
//     return 0;
// }

int main()
{
    string customer;
    cout<<"Enter your full name: ";
    getline(cin, customer);
    cout << "Customer name is: " << customer << endl;
    return 0;
}