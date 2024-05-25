#include<iostream>
using namespace std;
int main()
{
int n,sum=0,i=1;
cout<<"Enter the Number: ";
cin>>n;
while( i<=n)
{
    sum+=i;
    i++;
}
cout<<"Sum of "<<n<<"Natural Numbers is:"<<sum;
};