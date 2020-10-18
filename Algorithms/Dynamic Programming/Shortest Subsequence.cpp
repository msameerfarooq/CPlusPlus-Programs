// There are two strings S and V and we need to find the length of shortest subsequence in S
// such that it is not a subsequence in V.

#include<iostream>
using namespace std;

int solve(string S, string V)
{
    int L1 = S.length();
    int L2 = V.length();
    int** DPArray = new int*[L1+1];
	
    for(int i=0; i<=L1; i++)
        DPArray[i] = new int[L2+1];

    for(int i=0; i<=L1; i++)
        DPArray[i][L2] = 1; 

    for(int i=0; i<=L2; i++)
        DPArray[L1][i] = 10001;

    for(int i=L1-1; i>=0; i--)
    {
        for(int j=L2-1; j>=0; j--)
        {
            int k = j;
            for(; k<L2; k++)
            {
                if(S[i]==V[k])
                    break;
            }
            if(k==L2)
                DPArray[i][j] = 1;
            else
                DPArray[i][j] = min(DPArray[i+1][j], 1+DPArray[i+1][k+1]);
        }
    }
    return DPArray[0][0];
}

int main()
{
	string s1, s2;
	cout<<"Enter first string - ";
	cin>>s1;
	cout<<"Enter second string - ";
	cin>>s2;
	cout<<"Length of shortest subsequence - "<<solve(s1, s2)<<endl;
}
