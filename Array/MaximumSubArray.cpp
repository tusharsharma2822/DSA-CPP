#include<iostream>
using namespace std;

int maximumSubarray(int array[], int size)
{
    int result = 0;
    for(int i=0;i<size;i++)
    {
        int current = 0;
        for(int j=i;j<size;j++)
        {
            current = current + array[j];
            result = max(result,current);
        }
    }

    return result;
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

    int result = maximumSubarray(array,size);

    cout << result << endl;

    return 0;
}
