
// DATE: 7/10/2022 1:39 pm
// LOCATION: Uzbekistan, Tashkent
// DEVELOPER: Eshpulatov Otabek

// TASK: You have a water dispenser that can dispense cold, warm, and hot water.
// Every second, you can either fill up 2 cups with different types of water, or 1 cup of any type of water.
// You are given a 0-indexed integer array amount of length 3
// where amount[0], amount[1], and amount[2] denote the number of cold, warm, and hot water cups you need to fill respectively.
// Return the minimum number of seconds needed to fill up all the cups.

// DIFFICULTY: Easy



#include<bits/stdc++.h>
using namespace std;

int FFF(vector<int> water);

int main()
{
    int sum=0;
    vector<int> water = {5,4,2};
    sort(water.begin(), water.end());

    if(water[2]==0)
    {
        cout<<water[2]<<endl;
        return 0;
    }

    while(water[2]!=0)
    {
        if(FFF(water)==2)
        {
            sum++;
            water[1]--;
            water[2]--;
        }

        sort(water.begin(), water.end());

        if(water[1]==0)
        {
            sum+=FFF(water);
            water[2]=0;
        }
    }

    cout<<">>> "<<sum<<endl;


    return 0;
}

int FFF(vector<int> water)
{
    int sum=0;

    if(water[1] > 0)
    {
        sum=2;
    }
    else
    {
        sum=water[2];
    }

    return sum;

}

















