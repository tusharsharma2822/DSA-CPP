#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }

    sort(array,array+size);

    for(int i=0;i<size;i++)
    {
        cout << array[i] << " "; 
    }

    return 0;
}
