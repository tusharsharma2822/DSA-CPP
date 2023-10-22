#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printFrequency(int array[], int size)
{
    if(size == 1 || array[size-1] != array[size-2])
    {
        cout << array[size-1] << " -> " << 1 << endl;
    }
    int count = 1, i = 1;
    while(i < size)
    {
        while(i < size && array[i] == array[i-1])
        {
            count += 1;
            i += 1;
        }
        cout << array[i-1] << " -> " << count << endl;
        i += 1;
        count = 1;
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

    printFrequency(array,size);

    return 0;
}
