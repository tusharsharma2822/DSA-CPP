#include<iostream>
using namespace std;

bool KthBit(int n, int k) /*Using the left shift operator*/
{
    if((n & (1 << (k-1))) != 0)
    {
        return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    bool result = KthBit(n,k);
    cout << result << endl;
    
    return 0;
}
