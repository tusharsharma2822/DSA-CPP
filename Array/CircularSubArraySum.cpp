#include<iostream>
#include<math.h>
using namespace std;

int circularSubArray(int array[], int size)
{
    int result = array[0];
    for(int i=0;i<size;i++)
    {
        int currentSum = 0;
        int currentMaximum = array[0];
        for(int j=1;j<size;j++)
        {
            int index = (i+j)%size;
            currentSum += array[index];
            currentMaximum = max(currentMaximum,currentSum);
        }
        result = max(result,currentMaximum);
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

    int result = circularSubArray(array,size);

    cout << result << endl;

    return 0;
}

