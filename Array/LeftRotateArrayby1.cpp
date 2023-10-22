#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

void LeftRotatebyOne(int array[], int size)
{
    int temp = array[0];
    for(int i=1;i<size;i++)
    {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
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

    printArray(array,size);

    LeftRotatebyOne(array,size);
    cout << endl;

    printArray(array,size);

    return 0;
}
