#include<iostream>
#include<array>
using namespace std;

int subsetSum(int array[], int n, int sum)
{
    if(n == 0)
    {
        return (sum == 0)?1:0;
    }
    return subsetSum(array,n-1,sum)+subsetSum(array,n-1,sum-array[n-1]);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }

    int sum;
    cout << "Enter the value of the sum: ";
    cin >> sum;

    int result = subsetSum(array,n,sum);
    cout << result;

    return 0;
}
