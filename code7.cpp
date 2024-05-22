#include<iostream>
using namespace std;
//Switch Statement
int main()
{ int n;
cout<<"Enter Your choice: ";
cin>>n;
switch(n)
{
    case 1:
    {
        cout<<"Than You for choosing Option 1";
        break;
    }
    case 2:
    {
        cout<<"You Have choosen opt 2";
        break;
    }
    default:
    {
        cout<<"Please select either opt1 or opt 2";
    }
}

};