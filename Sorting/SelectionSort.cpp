#include<iostream>
#include<algorithm>
using namespace std;

void SelectionSort(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        int min_index = i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        swap(array[min_index],array[i]);
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

    SelectionSort(array,size);

    printArray(array,size);

    return 0;
}
