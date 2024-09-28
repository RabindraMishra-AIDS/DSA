// Finding the size of the string without using size function
#include<iostream>
#include<vector>
using namespace std;
int main()
{ string s;
cout<<"Enter the String: ";
cin>>s;
int i=0;
while(s[i]!='\0'){
    i++;
}
cout<<i;
};