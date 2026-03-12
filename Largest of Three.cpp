#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"Welcome to a program that tells you which number is the largest!!!\n";
    cout << "Enter the first number: " << endl;
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter the third number: ";
    cin>>z;

    if (x>=y && x>=z) {
        cout<<"The largest number is: "<<x;
    }

    else if (y>=x && y>=z) {
        cout<<"The largest number is: "<<y;
    }

    else {
        cout<<"The largest number is: "<<z;
    }
}