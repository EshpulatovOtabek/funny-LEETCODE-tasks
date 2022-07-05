
// DATE: 7/5/2022 11:41
// DEVELOPER: Eshpulatov Otabek
// TASK:
/*
An array of numbers is given like this, 1,1,2,0,1. If it's possible to reach the end of the array with
numbers within the array you'll return true, else it is false.

In this array, it's true, because:

there are overall 5 numbers (1,1,2,0,1) and if you move 'i' to the right by the value of the first,
second, third elements, et. c.  you'll get to the end of the array.
in this another array --> {0,1,133,434,6,7}, no matter how numbers are big in the array it is impossible to reach the end of the array.
Because, the first element in the array is zero, zero has no value and you can't move 'i' towards the end of the array.
*/

// DIFFICULTY: Medium


#include <iostream>
using namespace std;


int main()
{
    int n;
    cout<<"n= ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<"]= ";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; )
    {

        if(arr[0]==0)
        {
            cout<<"0"<<endl;
            break;
        }
        if(arr[i]!=0)
        {
            sum+=arr[i];
            i+=sum;
            sum=0;
        }
        else
        {
            cout<<"0"<<endl;
            break;
        }
        if(i==n-1 || i>n-1)
        {
            cout<<"1"<<endl;
            break;
        }
    }
    cout<<endl;
    return main();
}
