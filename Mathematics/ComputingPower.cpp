#include<iostream>
#include<math.h>
using namespace std;

int computingPower(int x, int n)
{
    int result = 1;
    for(int i=0;i<n;i++)
    {
        result = result * x;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of number: ";
    cin >> n;

    int x;
    cout << "Enter the value of exponent: ";
    cin >> x;

    int result = computingPower(x,n);
    cout << result;
    
    return 0;
}
