
// DATE: 7/6/2022 7:13 pm
// LOCATION: Uzbekistan, Tashkent
// DEVELOPER: Eshpulatov Otabek
// TASK NUMBER: 15

// TASK: Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.

// DIFFICULTY: Medium

#include<bits/stdc++.h>
using namespace std;


bool TTT(vector<int> vec2, int ii);

int main()
{
    vector<int> vec = {-1,0,1,2,-1,-4};
    int n = sizeof(vec)/sizeof(vec[0]);

    vector<int>vec2;

    int sum=0;
    int d=1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(vec[i]+vec[j]+vec[k]==0 && i!=j && i!=k && j!=k)
                {
                    if(d==1 && vec[i]+vec[j]+vec[k]==0 && i!=j && i!=k && j!=k)
                    {
                        cout<<vec[i]<<" "<<vec[j]<<" "<<vec[k]<<endl;
                        vec2.push_back( abs(vec[i]) + abs(vec[j]) + abs(vec[k]) );
                        d++;
                    }
                    else
                    {
                        sum = abs(vec[i]) + abs(vec[j]) + abs(vec[k]);
                        if(TTT(vec2, sum))
                        {
                            vec2.push_back(sum);
                            cout<<vec[i]<<" "<<vec[j]<<" "<<vec[k]<<endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}


bool TTT(vector<int> vec2, int ii)
{
    for(int i=0; i<vec2.size(); i++)
    {
        if(vec2[i]==ii)
        {
            return false;
        }
    }
    return true;
}

