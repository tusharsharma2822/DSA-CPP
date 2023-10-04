#include<iostream>
using namespace std;

int deleteElement(int array[], int size, int x)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(array[i] == x)
        {
            break;
        }
    }
    if(i == size)
    {
        return size;
    }
    for(int j=0;j<size-1;j++)
    {
        array[j] = array[j+1];
    }
    return (size-1);
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the value of a size of an array: ";
    cin >> size;

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }

    int x;
    cout << "Enter the value of an element you want to delete: ";
    cin >> x;

    int result = deleteElement(array,size,x);
    cout << result << endl;

    return 0;
}
