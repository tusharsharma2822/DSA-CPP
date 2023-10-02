#include<iostream>
using namespace std;

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;

    int result = sum(n);
    cout << result << endl;
    
    return 0;
}
