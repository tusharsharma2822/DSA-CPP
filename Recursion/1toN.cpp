#include<iostream>
using namespace std;

void print1toN(int n)
{
    if(n == 0)
    {
        return;
    }
    print1toN(n-1);
    cout << n << " ";
}

int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter the value of a number: ";
    cin >> number;

    print1toN(number);

    return 0;
}
