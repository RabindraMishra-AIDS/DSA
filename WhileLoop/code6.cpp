#include<iostream>
using namespace std;
// continue statement
int main()
{
    int i=1;
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    while(i<=n)
    {
        if(i%2==0 && i>n/2)
        { i++;
            continue;
        }
        else
        cout<<i<<" ";i++;
    }
}