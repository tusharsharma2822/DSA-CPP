#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if(start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && isPalindrome(str, start+1, end-1);
}

int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter your string to be checked: ";
    cin >> s;

    int n = s.length();

    bool result = isPalindrome(s,0,n-1);
    cout << result << endl;

    return 0;
}
