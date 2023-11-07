#include<iostream>
using namespace std;

int maxEvenOdd(int array[], int size)
{
    int result = 1, current = 1;
    for (int i=0;i<size;i++) 
    {
        if((array[i]%2 == 0 && array[i-1]%2 != 0) || (array[i]%2 != 0 && array[i-1]%2 == 0))
        {
            current += 1;
            result = max(result,current);
        }
        else
        {
            current = 1;
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

    int result = maxEvenOdd(array,size);

    cout << result << endl;

    return 0;
}

