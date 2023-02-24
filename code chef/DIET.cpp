#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n,k;
        cin >>n>>k;
        int count=0;
        int x=0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            count=a[i]-k+count;
            x++;
            if(count<0){break;}
        }
        if(count<0){
            cout <<"NO"<<" "<< x<<endl;
        }
        else {
            cout <<"YES"<<endl;
        }
        
        
	}
	return 0;	
}