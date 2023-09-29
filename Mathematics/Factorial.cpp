#include<iostream>
#include<math.h>
using namespace std;

long factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;
    
    int result = factorial(n);
    cout << result;
    
    return 0;
}

/*Recursive Approach*/
#include<iostream>
#include<math.h>
using namespace std;

long factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;
    
    int result = factorial(n);
    cout << result;
    
    return 0;
}