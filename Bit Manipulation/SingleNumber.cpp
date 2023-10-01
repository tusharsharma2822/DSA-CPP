#include<iostream>
using namespace std;

int SingleNumber(int arr[], int size)
{
    int result = 0;
    for(int i=0;i<size;i++)
    {
        result ^= arr[i];
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }

    int result = SingleNumber(array,size);
    cout << "The single element present in an array is: " << result << endl;

    return 0;
}
