#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int GCD(int a, int b)
{
    int result = min(a,b);
    while(result > 0)
    {
        if(a%result == 0 && b%result == 0)
        {
            break;
        }
        result -= 1;
    }
    return result;
}

int main()
{
    int n1;
    cout << "Enter the value of a first number: ";
    cin >> n1;
    
    int n2;
    cout << "Enter the value of a second number: ";
    cin >> n2;
    
    int result = GCD(n1,n2);
    cout << result;

    return 0;
}