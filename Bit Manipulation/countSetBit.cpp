// /*First Solution*/
// #include<iostream>
// using namespace std;

// int countBits(int n)
// {
//     int count = 0;
//     while(n > 0)
//     {
//         if(n%2 != 0)
//         {
//             count += 1;
//         }
//         n = n/2;
//     }
//     return count;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Enter the value of a number: ";
//     cin >> n;

//     int result = countBits(n);
//     cout << "The number of set bits in a result are: " << result;

//     return 0;
// }


// /*using the bitwise and operator as well as the right shift operator*/
// #include<iostream>
// using namespace std;

// int countBits(int n)
// {
//     int count = 0;
//     while(n > 0)
//     {
//         if((n&1) == 1)
//         {
//             count += 1;
//         }
//         n = n >> 1;
//     }
//     return count;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Enter the value of a number: ";
//     cin >> n;

//     int result = countBits(n);
//     cout << result;

//     return 0;
// }


/*Brian Kerningam's Algorithm*/
#include<iostream>
using namespace std;

int countBits(int n)
{
    int count = 0;
    while(n > 0)
    {
        n = n&(n-1);
        count  += 1;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of a number: ";
    cin >> n;

    int result = countBits(n);
    cout << result;
    
    return 0;
}
