
#include<iostream>
#include<vector>
using namespace std;
int size(string m)
{
    return m.size();
}
string add(string m,string n){
    return m +" "+n;
}
int main()
{
    string r="rabindra";
    string m="mishra";
    // Length of string.
    cout<<size(r)<<endl;
    // Adding two strings.
    cout<<add(r,m);
    r.pop_back();
    cout<<endl<<r;
    m.push_back('t');
    cout<<endl<<m;
}