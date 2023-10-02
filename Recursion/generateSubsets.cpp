#include<iostream>
#include<string>
using namespace std;

void generateSubsets(string s, string current, int i)
{
    if(i == s.length())
    {
        cout << s << " ";
        return;
    }
    generateSubsets(s,current,i+1);
    generateSubsets(s,current+s[i],i++);
}

int main(int argc, char const *argv[])
{
    generateSubsets("abc"," ",0);
    return 0;
}
