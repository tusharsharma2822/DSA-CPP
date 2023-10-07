#include<iostream>
using namespace std;

bool checkSorted(int array[], int size)
{
    for(int i=1;i<size;i++)
    {
        if(array[i] < array[i-1])
        {
            return false;
        }
    }
    return true;
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

    bool result = checkSorted(array,size);
    cout << result << endl;

    return 0;
}
