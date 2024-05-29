#include<iostream>
#include<vector>
#include<algorithm>
// Creating a 2D vector
using namespace std;
int main()
{  vector<vector<int>>v; //Declaring  a 2D vector.

// We can also declare and intialize a vector by specifying rows and columns.

vector<vector<int>>matrix(3,vector<int>(4,1));
int i,j;
for (i=0;i<matrix.size();i++)
{
    for (j=0;j<matrix[0].size();j++)
    {
        cout<<matrix[i][j]<<" ";
    } cout<<endl;
}
};