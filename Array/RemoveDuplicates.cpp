#include<iostream>
using namespace std;

int removeDuplicates(int array[], int size)
{
    int result = 1;
    for(int i=1;i<size;i++)
    {
        if(array[i] != array[result - 1])
        {
            array[i] = array[result];
            result += 1;
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

    int result = removeDuplicates(array,size);
    cout << result << endl;

    return 0;
}
