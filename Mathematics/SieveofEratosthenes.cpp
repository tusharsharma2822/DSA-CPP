#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

bool checkPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

void sieve(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(checkPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of the number: ";
    cin >> n;

    sieve(n);

    return 0;
}
