
// DATE: 7/7/2022 2:37 pm
// LOCATION: Uzbekistan, Tashkent
// DEVELOPER: Eshpulatov Otabek
// TASK: Displaying indexes of two array elements that add up to each other and the sum of them is equal to k
// for example input is {2,7,8,2,1, 9, 0} and k = 9, and output will be --> 0,1. Because if you add 2 and 7, you can get 9.
// Also, you have to display all possible alternatives to get 9 like 5,6 because the sum of 9 and 0 is also 9.
// However, duplicate numbers shouldn't be displayed




#include<bits/stdc++.h>
using namespace std;
bool TTT(vector<int> vec, int ii, int jj);

int main()
{
    int k;
    cout<<"k= ";
    cin>>k;
    vector<int>vec;
    int arr[] = {2,7,2,5,7,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]+arr[j]==k && i!=j)
            {
                vec.push_back(arr[i]);
                vec.push_back(arr[j]);
                if(d==0)
                {
                    vec.push_back(arr[i]);
                    vec.push_back(arr[j]);
                    d++;
                    cout<<">>> "<<i<<" "<<j<<endl;
                }
                else if(TTT(vec, arr[i], arr[j]))
                {
                    cout<<">>> "<<i<<" "<<j<<endl;
                    vec.push_back(arr[i]);
                    vec.push_back(arr[j]);
                }
            }
        }
    }


    return 0;

}

bool TTT(vector<int> vec, int ii, int jj)
{
    int d=0;

    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]==ii || vec[i]==jj)
        {
            d++;
        }
    }

    if(d>2)
    {
        return false;
    }
    else
    {
        return true;
    }
}




