#include<iostream>
using namespace std;

int FirstOccurence(int array[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int answer = -1;
    int mid = low + (high - low)/2;
    while(low <= high)
    {
        if(array[mid] == target)
        {
            answer = mid;
            high = mid - 1;
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

    return answer;
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
    cout << "Enter the size of a target: ";
    cin >> target;

    int result = FirstOccurence(array,size,target);
    cout << result << endl;

    return 0;
}
