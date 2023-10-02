#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;

    int result = factorial(n);
    cout << result << endl;
    
    return 0;
}
