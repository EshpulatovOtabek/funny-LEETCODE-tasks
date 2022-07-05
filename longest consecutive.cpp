
// DATE: 7/5/2022 9:49 pm
// LOCATION: Uzbekistan, Tashkent
// DEVELOPER: Eshpulatov Otabek
// TASK NUMBER: 128
// TASK: Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence
// DIFFICULTY: Medium

#include<bits/stdc++.h>
using namespace std;
int TTT(vector<int> arr, int start, int n);

int main()
{
    int arr[] = {1,2,2,3,77,1,66,65,886,67,68,69,74,72,73,71,70,75};
    int n = sizeof(arr)/sizeof(arr[0]); // getting length of the array

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    sort(arr, arr+n); // sorting array elements in the ascending order

    vector<int> vec;
    vec.push_back(arr[0]);

    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            vec.push_back(arr[i]);  // selecting unique numbers and assigning them to the new array
        }
    }

    cout<<"\n\n";
    
    int MAX=0;

    for(int i=0; i<n; i++)
    {
        int t = TTT(vec, i, n);
        MAX=max(MAX,t);
    }
    cout<<"MAX= "<<MAX<<endl; // displaying the longest consecutive series of numbers

    return 0;

}

int TTT(vector<int>vec, int start, int n)
{
    int c=1;
    for(int i=start; i<n; i++)
    {
        if(vec[i]+1==vec[i+1])
        {
            c++;
        }
        else
        {
            break;
        }
    }

    return c;
}


