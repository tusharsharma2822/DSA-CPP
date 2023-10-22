#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void movetoEnd(int array[], int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(array[i] != 0)
        {
            swap(array[i],array[count]);
            count++;
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

    movetoEnd(array,size);

    printArray(array,size);

    return 0;
}
