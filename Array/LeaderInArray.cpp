#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void LeaderInArray(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        bool flag = false;
        for(int j=i+1;j<size;j++)
        {
            if(array[i] < array[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            cout << array[i] << " ";
        }
    }
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

    LeaderInArray(array,size);

    return 0;
}
