#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		long long n;
        cin >> n;
        long long a[n];
        long long b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != b[i]){
                a[i]=b[i];
            }
        }
        if(a[n]==0){
            cout <<"yes" << endl;
        }
        else { cout <<"no" << endl; }
        

	}
	return 0;	
}