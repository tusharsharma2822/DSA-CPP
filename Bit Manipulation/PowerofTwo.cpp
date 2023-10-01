#include<iostream>
using namespace std;

bool powerofTwo(int n)
{
    if(n == 0)
    {
        return false;
    }
    while(n != 1)
    {
        if(n % 2 != 0)
        {
            return false;
        }
        n = n/2;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;

    bool result = powerofTwo(n);
    cout << result;

    return 0;
}
