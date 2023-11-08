#include<iostream>
using namespace std;

int BinarySearch(int array[], int low, int high, int target)
{
    int mid = low + (high - low)/2;
    while(low <= high)
    {
        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            return BinarySearch(array,mid+1,high,target);
        }
        else
        {
            return BinarySearch(array,low,mid-1,target);
        }
        mid = low + (high - low)/2;
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
    cout << "Enter the value of the target: ";
    cin >> target;

    int result = BinarySearch(array,0,size-1,target);
    cout << result << endl;
    
    return 0;
}