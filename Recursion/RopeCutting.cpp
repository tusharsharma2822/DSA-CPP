#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    if(n == 0)
    {
        return 0;
    }
    if(n < 0)
    {
        return -1;
    }
    int result = max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c),maxPieces(n-c,a,b,c));
    if(result == -1)
    {
        return -1;
    }
    return result + 1;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    int b;
    cout << "Enter the value of b: ";
    cin >> b;

    int c;
    cout << "Enter the value of c: ";
    cin >> c;

    cout << maxPieces(n,a,b,c) << endl;

    return 0;
}
