/*Operation 1: Searching in an Unsorted Array*/
#include<iostream>
using namespace std;

int search(int array[], int n, int x) 
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            return i;
        } 
    }   
    return -1;
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

    int target;
    cout << "Enter the value of the target that you want to search: ";
    cin >> target;

    cout << "The index at which the target is located is: " << search(array,size,target) << endl;

    return 0;
}
