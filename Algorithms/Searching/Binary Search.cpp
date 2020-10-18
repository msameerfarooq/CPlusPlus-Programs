#include<iostream>
#include<vector>
#include<algorithms>
using namespace std;

// takes O(lg(size)) time
int binarySearch(vector<int> &Array, int term)
{
    int left=0,right=Array.size()-1,mid;    
    while(left<=right)
    {
        mid=(left+right)/2;
        if(Array[mid]==term)
            return mid;
        else if(Array[mid]>term)
            right=mid-1;
        else
            left=mid+1;
    }
    return -1;
}
int main()
{
    int size=0,term=0;
	
    cout<<"Enter number of elements: ";
    cin>>size;
	
    vector<int> Array(size);
	
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
        cin>>Array[i];
	
    cout<<"Enter the term to search for: ";
    cin>>term;
	
    sort(Array.begin(),Array.end());
	
    int found=binarySearch(Array,term);
    if(found==-1)
        cout<<"Element not present";
    else
        cout<<"Element present";
    return 0;
}