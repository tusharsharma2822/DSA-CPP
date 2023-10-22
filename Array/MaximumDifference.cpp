/*Naive Solution*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaximumDifference(int array[], int size)
{
    int result = array[1] - array[0];
    for(int i=2;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            result = max(result,array[j]-array[i]);
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

    int result = MaximumDifference(array,size);
    cout << result << endl;

    return 0;
}

/*Efficient Solution*/
#include<iostream>
using namespace std;

int maximumDifference(int array[], int size)
{
    int result = array[1]-array[0];
    int minValue = array[0];
    for(int i=2;i<size;i++)
    {
        result = max(result,array[i]-minValue);
        minValue = min(minValue,array[i]);
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

    int result = maximumDifference(array,size);
    cout << result << endl;

    return 0;
}
