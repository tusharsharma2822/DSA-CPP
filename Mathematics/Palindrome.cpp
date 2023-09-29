/*Recursive Approach*/
#include <iostream>
using namespace std;

bool checkPalindrome(int n, int temp)
{
    if(n == 0)
    {
        return temp;
    }
    temp = (temp*10)+(n%10);
    return checkPalindrome(n/10,temp);
}

int main() {
	int n;
    cout << "Enter the value of a number: ";
	cin >> n;
	
	bool result = checkPalindrome(n,0);
	cout << result;
	
	return 0;
}

/*Iterative Approach*/
#include <iostream>
using namespace std;

bool checkPalindrome(int n)
{
    int rev = 0;
    int temp = n;
    while(temp != 0)
    {
        int rem = temp%10;
        rev = rev*10 + rem;
        temp /= 10;
    }
    
    return (rev == n);
}

int main() {
	int n;
    cout << "Enter the value of a number: ";
	cin >> n;
	
	bool result = checkPalindrome(n);
	cout << result;
	
	return 0;
}