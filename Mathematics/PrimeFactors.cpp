#include<iostream>
#include<math.h>
using namespace std;

void primeFactors(int n)
{
    if(n < 1)
    {
        return;
    }
    for(int i=2;i*i<=n;i++)
    {
        while(n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
        if(n > 1)
        {
            cout << n;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of the number: ";
    cin >> n;

    primeFactors(n);

    return 0;
}