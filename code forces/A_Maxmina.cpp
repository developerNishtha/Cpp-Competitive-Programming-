#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n,k;
        cin >>n>>k;
        int a[n];
        int count_0=0;
        int count_1=0;
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1){
                count_1++;
                break;
            }
        }
        if(count_1){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        } 
	}
	return 0;	
}