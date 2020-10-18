#include<iostream>
#include<vector>
using namespace std;

bool compare(int a, int b) 
{
	return a > b;
}

// Bubble Sort
void bubblesort(vector<int> Array) 
{
	int n=Array.size();
	for (int j = n - 1; j > 0; j--) 
	{
		for (int i = 0; i < j; i++) 
		{
			if (compare(Array[i + 1], Array[i])) 
			{
				// Swaping
				int temp = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = temp;
			}
		}
	}
}

int main() 
{
	int size=0;
    cout<<"Enter number of elements: ";
    cin>>size;
	
    vector<int> Array(size);
	
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
        cin>>Array[i];
	
	bubblesort(Array, size);

	for (int i = 0; i < n; i++)
		cout<<Array[i];
}
