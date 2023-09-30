#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 3;
    cout << (x << 1) << endl; /*left shift operator*/
    cout << (x >> 1) << endl; /*right shift operator*/
    cout << (~x) << endl; /*bitwise not*/
    return 0;
}
