// Arrya of characters is called string
//Taking string INput "APPLE"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    char arr[]={'A','P','P','P','L','E','g'};
    int i;
    int length=sizeof(arr)/sizeof(arr[0]); // calculating number of elements in array
    for(i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}
