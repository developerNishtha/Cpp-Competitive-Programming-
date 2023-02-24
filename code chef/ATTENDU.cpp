#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        int count=0;
        cin >>n;
        string a;
        cin >>a;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='1'){count++;}
        }
        int remaining=120-n;
        count+=remaining;
        int pr= (count/120.0)*100;
        if(pr>=75) {cout <<"YES"<<endl;}
        else {cout <<"NO"<<endl;}
        
        
	}
	return 0;	
}