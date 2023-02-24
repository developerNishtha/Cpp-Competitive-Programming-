#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		long long n;
        cin >>n;
        long long b=n-1;
        if(n%2==0){
            cout << (n/2)*(n/2)*2<<endl;
        }
        else{
            cout <<((n/2)+1)*(n/2)*2 <<endl;
        }
	}
	return 0;	
}