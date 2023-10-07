#include<iostream>
using namespace std;

void reverseArray(int array[], int size)
{
    int low = 0;
    int high = size-1;
    while (low < high)
    {
        int temp = array[low];
        array[low] = array[high];
        array[high] = temp;
        low += 1;
        high -= 1;
    }
}

void printArray(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << array[i] << " ";
    }
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

    reverseArray(array,size);

    printArray(array,size);

    return 0;
}
