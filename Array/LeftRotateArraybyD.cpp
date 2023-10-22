#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

void leftRotateArraybyOne(int array[], int size)
{
    int temp = array[0];
    for(int i=0;i<size;i++)
    {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
}

void leftRotateArraybyD(int array[], int size, int d)
{
    for(int i=0;i<d;i++)
    {
        leftRotateArraybyOne(array,size);
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
    for(int i=0;i<size;i++)
    {
        cin >> size;
    }

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }

    int d;
    cout << "Enter the value of the d: ";
    cin >> d;

    printArray(array,size);

    leftRotateArraybyD(array,size,d);
    cout << endl; 
    
    printArray(array,size);

    return 0;
}
