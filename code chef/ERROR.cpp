#include<bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
        cin>>s;
        int n=s.length();
        int i=0;
        int a=0;
        while(i<(n-2)){
            if((s[i]!=s[i+1])&&(s[i+1]!=s[i+2]))
            {
                a+=1;
            }
            i++;
        }
        if(a>0)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
	}
	return 0;
}
