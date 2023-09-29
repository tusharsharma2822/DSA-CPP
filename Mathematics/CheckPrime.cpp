/*Naive Solution*/
#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of the number: ";
    cin >> n;

    bool result = checkPrime(n);
    cout << result;

    return 0;
}

/*Efficient Solution*/
#include<iostream>
#include<math.h>
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

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of the number: ";
    cin >> n;

    bool result = checkPrime(n);
    cout << result;

    return 0;
}
