#include<iostream>
using namespace std;

int secondLargest(int array[], int size)
{
    int result = -1;
    int largest = 0;
    for(int i=0;i<size;i++)
    {
        if(array[i] > array[largest])
        {
            result = largest;
            largest = i;
        }
        else if(array[i] != array[largest])
        {
            if(result == -1 || array[i] > array[result])
            {
                result = i;
            }
        }
    }
    return result;
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

    int result = secondLargest(array,size);
    cout << result << endl;
    
    return 0;
}
