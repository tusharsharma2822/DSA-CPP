#include<iostream>
#include<array>
using namespace std;

int insert(int array[], int n, int x, int capacity, int position)
{
    if(n == capacity)
    {
        return n;
    }

    int index = position - 1;
    for(int i=n-1;i>=index;i--)
    {
        array[i+1] = array[i];
    }

    array[index] = x;
    return (n+1);
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
    int capacity;
    cout << "Enter the capacity of an array: ";
    cin >> capacity;

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }

    int position;
    cout << "Enter the position at which you want to insert an array: ";
    cin >> position;

    int x;
    cout << "Enter the value you want to insert: ";
    cin >> x;

    int result = insert(array,size,x,capacity,position);
    cout << result << endl;

    printArray(array,size);

    return 0;
}
