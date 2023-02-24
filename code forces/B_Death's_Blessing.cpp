#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >>n;
        long long x=0;
        long long y=0;
        long long int a[n],b[n];
        for (long long i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >>b[i];
            
        }
        int p=b[0];
        for (long long i = 0; i < n; i++)
        {
            x=x+a[i]+b[i];
            if(b[i]>p){
                p=b[i];
            }
        }
        
        cout <<x-p<<endl;
        
	}
	return 0;	
}