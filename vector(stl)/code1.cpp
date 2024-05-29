#include<iostream>
#include<vector>
using namespace std;
int main()
{
//Declare Vector
vector<int>v;
vector<int>v1(5,1);
cout<<"Size of v:"<<v.size()<<endl;
cout<<"capacity of v:"<<v.capacity()<<endl;
v.push_back(3);
v.push_back(10);
v.push_back(5);
cout<<"Size of v:"<<v.size()<<endl;
cout<<"capacity of v:"<<v.capacity()<<endl;
//Update Value
v[1]=5;
cout<<"Size of v:"<<v1.size()<<endl;
cout<<"capacity of v:"<<v1.capacity()<<endl;
v1.push_back(8);
cout<<"Size of v:"<<v1.size()<<endl;
cout<<"capacity of v:"<<v1.capacity()<<endl;

vector<int>v3 = {1,2,};


};