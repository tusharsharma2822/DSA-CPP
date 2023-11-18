#include<iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int array[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j] > array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
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

    BubbleSort(array,size);

    printArray(array,size);

    return 0;
}
