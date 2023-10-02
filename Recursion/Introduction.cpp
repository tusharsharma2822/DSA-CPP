#include<iostream>
using namespace std;

void fun1(int n)
{
    if(n == 0) /*base case*/
    {
        return;
    }
    cout << "Tushar Sharma" << endl;
    fun1(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of the number: ";
    cin >> n;

    fun1(n);

    return 0;
}
