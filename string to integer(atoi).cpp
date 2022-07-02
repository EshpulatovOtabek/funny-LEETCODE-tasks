
// DATE: 7/1/2022 10:20pm
// DEVELOPER: Eshpulatov Otabek
// TASK: String to integer(atoi)
// DIFFICULTY: Medium


#include <iostream>
using namespace std;

int main()
{

    string str;
    cout<<"str= ";
    cin>>str; //  getting a string from a user
    string COPY=""; // declaring an extra variable

    for(int i=0; i<str.size(); i++) // looping through all string characters
    {
        if(str[i]==',' || str[i]=='.' && isdigit(str[i-1])) // if a character is equal to '.' or ',' and if one character behind this current character is a digit, a loop stops from functioning
        {
            break;
        }
        if(str[i]!=' '&& isdigit(str[i]) || str[i]=='+' || str[i]=='-' && isdigit(str[i+1])) // if current character is not a whitespace and equals to minus or plus signs and a character after this character is a digit, it is added to an empty string variable
        {
            COPY+=str[i];
        }
    }
    if(COPY.size()==0) // if there is not a number, int value equals to zero
    {
        int value=0;
    }
    else // if not, it accepts all numbers above from a COPY string
    {
        int value = stoi(COPY);
        cout<<">>> "<<value<<endl;
    }
    cout<<endl;
    return main();
}
