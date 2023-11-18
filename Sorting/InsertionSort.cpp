#include<iostream>
#include<algorithm>
using namespace std;

void InsertionSort(int array[], int size)
{
    for(int i=1;i<size;i++)
    {
        int key = array[i];
        int j = i-1;
        while(j>=0 && array[j] > key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
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

    InsertionSort(array,size);

    printArray(array,size);

    return 0;
}
