
// DATE: 7/1/2022 10:20pm
// DEVELOPER: Eshpulatov Otabek
// TASK: #11. Container With Most Water
// DIFFICULTY: Medium


#include <iostream>
using namespace std;
int FFF(int i, int j, int distance);

int main()
{

    int n;
    cout<<"n= ";
    cin>>n; //accepting number of array elements are needed
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = "; //assigning user entered digits to their positions in an array
        cin>>arr[i];
    }

    int MAX=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            MAX=max(MAX,FFF(arr[i], arr[j], abs(i-j))); //finding a container that fits the most water using a 'FFF' function
        }
    }

    cout<<"Max area= "<<MAX<<"\n"<<endl;


    return main();
}

int FFF(int i, int j, int distance)
{
    return min(i,j)*distance; // {3,1,4,5} distance between 3 and 5 is 3. min(5,3)=3. Max area = 3*3=9
}
