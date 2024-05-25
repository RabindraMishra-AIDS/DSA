#include<iostream>
using namespace std;
// Print n natural numbers using do while loop
int main()
{ int i=1,n;
cout<<"Enter the number: ";
cin>>n;
do{
    cout<<i<<" ";
    i++;
}while(i<=n);

};