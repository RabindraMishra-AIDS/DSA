#include<iostream>
using namespace std;

//Scope of a variable
int main()
{ int n=10;
int r=5;
if(r>2)
{
    int n=45;
    cout<<"scope value of if block n is: "<<n;
}cout<<endl<<"Scope Value of this n is: "<<n;

};