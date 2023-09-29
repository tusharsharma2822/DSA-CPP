#include<iostream>
#include<math.h>
using namespace std;

int LCM(int a, int b)
{
    int result = max(a,b);
    while(true)
    {
        if(result % a == 0 && result % b == 0)
        {
            return result;
        }
        result++;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cout << "Enter the value of the numbers: ";
    cin >> a >> b;

    int result = LCM(a,b);
    cout << result;
    
    return 0;
}