#include <iostream>
using namespace std;

int main() 
{
   int length;
    cout<<"Enter the number of elements in the array : ";
    cin>>length;
    int arr[length];
    cout<<endl<<"Enter All array elements : ";

    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    cout<<"All elements are : "<<endl;
    for(int i = 0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}