#include<iostream>
#include<vector>
// Search an element in an 2d array.
using namespace std;
int main()
{
    int a[4][3]={1,2,3,4,5,6,47,8,9,10,11,12};
    int x;
    cout<<"Enter the Element to be searched: ";
    cin>>x;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (a[i][j]==x){
            cout<<"Element Found!";
            return 0;}
        }
    }cout<<"Element Not found!";

}