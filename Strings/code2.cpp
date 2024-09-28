// User input string
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,i;
cout<<"Enter the Legth of the string: ";
cin>>n;
char arr[20];  //Define an char array of very big size because to avoid string overflow
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}