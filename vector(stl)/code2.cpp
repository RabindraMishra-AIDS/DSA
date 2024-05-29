#include<iostream>
#include<vector>
using namespace std;
int main()
{  vector<int>vnew;
vnew.push_back(12);
vnew.push_back(52);
vnew.push_back(17);
vnew.push_back(62);
vnew.push_back(14);
vnew.pop_back();
cout<<"Size of Vnew: "<<vnew.size()<<endl;
cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
vnew.erase(vnew.begin()+ 1);
cout<<"Size of Vnew: "<<vnew.size()<<endl;
cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;


};