#include<iostream>
using namespace std;

void printNto1(int n)
{
    if(n == 0)
    {
        return;
    }
    cout << n << " ";
    printNto1(n-1);
}

int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter the value of a number: ";
    cin >> number;

    printNto1(number);

    return 0;
}
