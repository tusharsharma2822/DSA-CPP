#include<iostream>
using namespace std;

void oddAppearing(int array[], int size)
{
    int XOR = 0, result1 = 0, result2 = 0;
    for(int i=0;i<size;i++)
    {
        int set = XOR & ~(XOR-1);
        for(int i=0;i<size;i++)
        {
            if((array[i] & set) != 0)
            {
                result1 = result1 ^ array[i];
            }
            else 
            {
                result2 = result2 ^ array[i];
            }
        }
    }    
    cout << result1 << result2;
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

    oddAppearing(array,size);

    return 0;
}