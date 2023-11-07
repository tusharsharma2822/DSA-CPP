#include<iostream>
using namespace std;

int majorityElement(int array[], int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i] == array[j])
            {
                count += 1;
            }
        }
    }
    if(count > size/2)
    {
        return count;
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

    int result = majorityElement(array,size);

    cout << result << endl;

    return 0;
}

