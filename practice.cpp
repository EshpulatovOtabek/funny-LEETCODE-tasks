
// DATE: 6/30/2022
// MADE BY: Eshpulatov Otabek
// PURPOSE: finding the longest non-repeating substring in a string

#include <iostream>
using namespace std;


int TTT(string str, string s, int start);
string fff(string str, string s, int start);


int main()
{
    string str;

    cout<<">>> ";
    cin>>str;    // getting a string from a user
    int MAX=0;
    string s;
    string clone;
    int h;

    for(int i=0; i<str.size(); i++)  // looping through all non-repeating letters combination
    {
        s="";
        s+=str[i];
        int temp = i+1;

        if(MAX<TTT(str,s,temp))
        {
            MAX=TTT(str,s,temp); // making a variable, MAX, equal to a result from functions below
            clone=fff(str,s,temp);
        }
    }
    cout<<">>> "<<MAX<<endl; // printing results
    cout<<">>> "<<clone<<"\n"<<endl;

    return main();
}


int TTT(string str, string s, int start)
{
    for(int i=start; i<str.size(); i++)
    {
        if(s.find(str[i])>s.size())   // it goes through all letters and compares if they are unique
        {
            s+=str[i];
        }
        else  // if it is not a case, the function stops and breaks the loop
        {
            break;
        }
    }
    return s.size(); // afterall, the function return length of all uniques letters
}


string fff(string str, string s, int start) // this function is the same as the first function above but it returns the longest unique letters, not the length of it
{
    for(int i=start; i<str.size(); i++)
    {
        if(s.find(str[i])>s.size())
        {
            s+=str[i];
        }
        else
        {
            break;
        }
    }

    return s;
}
