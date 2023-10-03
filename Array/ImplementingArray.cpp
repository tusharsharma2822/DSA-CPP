#include<iostream>
#include<array>
using namespace std;

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
    cout << "Enter the value of the size of an array: ";
    cin >> size;

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }   

    printArray(array,size);
    
    return 0;
}