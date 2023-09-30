#include<iostream>
#include<math.h>
using namespace std;

void allDivisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
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

    allDivisors(n);
    
    return 0;
}
