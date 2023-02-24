#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n,k,v;
        cin >>n>>k>>v;
        int a[n];
        int sum=0;
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
            sum+=a[i];
        }
        ans=(v*(n+k));
        if((ans-sum) %k==0 && (ans-sum/k>0)){
        cout<<(ans-sum)/k<<endl;
        }
        else{
            cout <<"-1"<<endl;
        }

        
	}
	return 0;	
}