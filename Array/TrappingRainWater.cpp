#include<iostream>
using namespace std;

int trappingRainWater(int array[],int size)
{
    int result = 0;
    for(int i=0;i<size-1;i++)
    {
        int leftMaximum = array[i];
        for(int j=i+1;j<size-1;j++)
        {
            leftMaximum = max(leftMaximum,array[i]);
        }
        
        int rightMaximum = array[i];
        for(int k=i+1;k<size;k++)
        {
            rightMaximum = max(rightMaximum,array[k]);
        }

        result += min(leftMaximum,rightMaximum) - array[i];
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

    cout << trappingRainWater(array,size) << endl;

    return 0;
}
