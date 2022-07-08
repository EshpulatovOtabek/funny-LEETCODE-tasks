
// DATE: 7/8/2022 1:56 pm
// LOCATION: Uzbekistan, Tashkent
// DEVELOPER: Eshpulatov Otabek
// TASK NUMBER: 38
// TASK: Count-And-Say is a sequence of numbers given below:

// 1.1
// 2.11
// 3.21
// 4.1211
// 5.111221

// DIFFICULTY: Medium



#include<bits/stdc++.h>
using namespace std;

string TTT(string base);

int main()
{
    int n;
    string base="1";
    cout<<"n= "; // getting which cycle of sequence we are gonna find
    cin>>n;

    for(int i=0; i<n-1; i++)
    {
        base = TTT(base); // updating the base after each sequence
    }

    cout<<">>> "<<base<<"\n"<<endl; // displaying the result


    return main();
}

string TTT(string base)
{
    string newbase="";
    int n=1;

    for(int i=0; i<base.size(); i++)
    {
        if(base[i]==base[i+1])
        {
            n++; // if current and next number of string are the same, increasing the value of n
        }
        else if(base[i]!=base[i+1]) // if they are not similar, we add new values to the newbase variable
        {
            newbase+=to_string(n)+base[i];
            n=1; // do not forget to make n equal to one!
        }
    }

    return newbase; // afterall, we return new value of the base variable
}
