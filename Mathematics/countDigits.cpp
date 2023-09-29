/*Iterative Approach*/
#include <iostream>
using namespace std;

int countDigit(long n)
{
    int count = 0;
    while(n != 0)
    {
        n = n/10;
        count += 1;
    }
    return count;
}

int main() 
{
    long n;
    cout << "Enter the value of a number: ";
    cin >> n;
    
    int result;
    result = countDigit(n);
    cout << "The number of digits in a number are: " << result;
	return 0;
}

/*Recursive Approach*/
#include <iostream>
using namespace std;

int countDigit(long n)
{
    if(n == 0)
    {
        return 0;
    }
    return 1 + countDigit(n/10);
}

int main() 
{
    long n;
    cout << "Enter the value of a number: ";
    cin >> n;
    
    int result;
    result = countDigit(n);
    cout << "The number of digits in a number are: " << result;
	return 0;
}

/*Logarithmic Approach*/
#include<iostream>
#include<math.h>
using namespace std;

int countDigit(long n)
{
    return floor(log10(n)+1);
}

int main() 
{
    long n;
    cout << "Enter the value of a number: ";
    cin >> n;
    
    int result;
    result = countDigit(n);
    cout << "The number of digits in a number are: " << result;
	return 0;
}
