#include<iostream>
using namespace std;

int getSum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return getSum(n/10) + n%10;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;

    cout << getSum(n) << endl;
    
    return 0;
}
