// Creating a 2d vector from user input
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int row,col;
cout<<"Enter the No. of rows: ";
cin>>row;
cout<<endl<<"Enter the No. of columns: ";
cin>>col;
int i,j;
vector<vector<int>>matrix(row,vector<int>(col));
for (i=0;i<matrix.size();i++)
{
    for(j=0;j<matrix[0].size();j++)
    {
        cin>>matrix[i][j];
    }
}

cout<<endl<<"Printing The values of Matrix: "<<endl;
for (i=0;i<matrix.size();i++)
{
    for(j=0;j<matrix[0].size();j++)
    {
        cout<<matrix[i][j]<<" ";
    }cout<<endl;
}

};