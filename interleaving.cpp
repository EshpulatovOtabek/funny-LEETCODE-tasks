
// DATE: 7/7/2022 8:01
// LOCATION: Uzbekistan, Tashkent
// DEVELOPER: Eshpulatov Otabek
// TASK NUMBER: 97
// TASK:
/*
Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where they are divided into non-empty substrings such that:

s = s1 + s2 + ... + sn
t = t1 + t2 + ... + tm
|n - m| <= 1
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.


*/


#include<bits/stdc++.h>
using namespace std;

bool TTT(string s3, string s2, string s1, int ii);
char FFF(string s3, string s2, string s1, int ii);
int main()
{

    string s3, s2,s1;

    cout<<"s1= ";
    cin>>s1;
    cout<<"s2= ";
    cin>>s2;
    cout<<"s3= ";
    cin>>s3;
    int n = s3.size();


    if(s3.size()!=s1.size()+s2.size())
    {
        cout<<"false"<<endl;
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        if(FFF(s3,s2,s1,i) == s2[0] || FFF(s3,s2,s1, i) == s1[0])
        {
            if(s2[0]==FFF(s3,s2,s1, i))
            {
                s2.erase(0,1);
            }
            else  if(s1[0]==FFF(s3,s2,s1,i))
            {
                s1.erase(0,1);
            }
        }
        else
        {
            cout<<"false\n"<<endl;
            return main();
        }
    }
    cout<<"true\n"<<endl;

    return 0;
}



char FFF(string s3, string s2, string s1, int ii)
{
    char result;

    if(s3[ii]==s2[0])
    {
        result = s2[0];
    }
    else if(s3[ii]==s1[0])
    {
        result = s1[0];
    }
    return result;
}
