
// DATE: 7/1/2022 7:30pm
// DEVELOPER: Eshpulatov Otabek
// TASK: reversing a string using only swap() function


#include <iostream>
using namespace std;

string REVERSE(string num)
{
    for(int i=0; i<num.size()/2; i++)
    {
        swap(num[i], num[num.size()-1-i]); //swapping elements' positions
    }

    return num; //if you want to return only decimal values, you may change function data type and parameter values too
}


int main()
{
    string num;
    string revNum;
    cout<<"num= "; // assigning user entered value to a string called 'num'
    cin>>num;
    revNum=REVERSE(num); // making sure reversed data is saved to a string
    cout<<"result: "<<revNum<<"\n"<<endl; // displaying a result on the screen

    return main();
}
