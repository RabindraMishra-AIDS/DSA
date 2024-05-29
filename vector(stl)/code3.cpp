//Dive array into two subarrays having equal sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr)
{
int max1=INT16_MIN,prefix=0,n=arr.size();int i,total_sum=0;
for(i=0;i<n;i++)
{
    total_sum+=arr[i];
}
for(i=0;i<n;i++)
{
    prefix+=arr[i];
    int ans=total_sum-prefix;
    if (ans==prefix)
    return 1;
} return 0;


}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the Elements of an Array:";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<divide(v);


};