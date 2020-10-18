#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &Array, int Value)
{
    for(int i=0;i<Array.size();i++)
        if(Array[i]==Value)
            return i;
    return -1;
}

int main()
{
    int size=0,value=0;
    cout<<"Enter number of elements: ";
    cin>>size;
	
    vector<int> Array(size);
	
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
        cin>>Array[i];
	
    cout<<"Enter the Value to search for: ";
    cin>>Value;
	
    int found=linearSearch(Array,Value);
    if(found==-1)
        cout<<"Element not present";
    else
        cout<<"Element found at index: "<<found;
    return 0;
}