#include<iostream>
using namespace std;

int Josephus(int n, int k)
{
    if(n == 1)
    {
        return 0;
    }
    return (Josephus(n-1,k)+k)%n;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = Josephus(n,k);
    cout << result << endl;

    return 0;
}
