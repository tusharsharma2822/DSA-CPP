#include<iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if(n == 1)
    {
        cout << "move 1 from " << A << " to " << C << endl;
        return; 
    }
    TOH(n-1,A,B,C);
    cout << "move " << n << " from " << A << " to " << C << endl;
    TOH(n-1,B,A,C);
}

int main(int argc, char const *argv[])
{
    TOH(4,'A','B','C');
    return 0;
}
