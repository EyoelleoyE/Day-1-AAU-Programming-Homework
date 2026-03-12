#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int sum = 0;

    while (i<=500) {
        sum = sum + i*i;
        i++;
    }

    cout<<"The summation from 10 to 500 of a squared number  is: "<<sum;
   
}



