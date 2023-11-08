#include<iostream>
using namespace std;

int BinarySearch(int array[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low)/2;
    while(low <= high)
    {
        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
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

    int result = BinarySearch(array,size,target);
    cout << result << endl;
    
    return 0;
}