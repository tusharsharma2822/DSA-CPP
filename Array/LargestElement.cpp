#include<iostream>
using namespace std;

int LargestElement(int array[], int size)
{
    int result = 0;
    int maximum = array[0];
    for(int i=1;i<size;i++)
    {
        if(maximum < array[i])
        {
            result = i;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the value of an array: ";
    cin >> size;

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }

    cout << LargestElement(array,size) << endl;
     
    return 0;
}
