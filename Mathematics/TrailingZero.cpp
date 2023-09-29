/*Naive Solution*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int countTrailingZero(int n)
{
    int product = 1, count = 0;
    for(int i=1;i<=n;i++)
    {
        product *= i;
    }
    while(product % 10 == 0)
    {
        count += 1;
        product /= 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the value of a number for checking: ";
    cin >> n;
    
    int result = countTrailingZero(n);
    cout << result << endl;
    
    return 0;
}

/*Efficient Solution*/
#include<bits/stdc++.h>
#include<math.h>

int countTrailingZero(int n)
{
    int result = 0;
    for(int i=5;i<=n;i++)
    {
        result = result + n/i;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;
    
    int result = countTrailingZero(n);
    cout << result << endl;
    
    return 0;
}