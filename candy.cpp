
// DATE: 7/5/2022 1:09 pm
// LOCATION: Uzbekistan, Tashkent
// DEVELOPER: Eshpulatov Otabek
// TASK NUMBER: 135
// TASK:

 /*
    There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.
    You are giving candies to these children subjected to the following requirements:

    Each child must have at least one candy.
    Children with a higher rating get more candies than their neighbors.

    Return the minimum number of candies you need to have to distribute the candies to the children.
  */

// DIFFICULTY: Hard

#include <iostream>
#include <vector>
using namespace std;


int main()
{


    int arr[] = {1, 0, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>candy;

    int num=n;
    cout<<"Rating of children:\n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
        candy.push_back(1);
    }

    for(int i=1; i<n-1; i++)
    {
        if(arr[0]>arr[1] && candy[0]<=candy[1])
        {
            num++;
            candy[0]++;
        }
        else if(arr[1]>arr[0] && candy[1]<=candy[0])
        {
            num++;
            candy[1]++;
        }
        if(arr[n-2]>arr[n-1] && candy[n-2]<=candy[n-1])
        {
            num++;
            candy[n-2]++;
        }
        else if(arr[n-2]<arr[n-1] && candy[n-2]>=candy[n-1] )
        {
            num++;
            candy[n-1]++;
        }
        for(int j=1; j<n-1; j++)
        {
            if(arr[j]>arr[j+1] && candy[j]<=candy[j+1])
            {
                num++;
                candy[j]++;
            }
            else if(arr[j]<arr[j+1] && candy[j+1]<=candy[j])
            {
                num++;
                candy[j+1]++;
            }
        }
    }
    cout<<"\n\nNumber of candies each children own according to their ranks: \n";
    for(int i=0; i<n; i++)
    {
        cout<<candy[i]<<" + ";
    }
    cout<<"= "<<num<<endl;

    return 0;
}



