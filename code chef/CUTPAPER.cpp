#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >>n>>k;
		if(n==k){
			cout <<"1"<<endl;
		}
		else if(k==1){
			cout <<n*n << endl;
		}
		else{
			cout <<(n/k)*(n/k)<<endl;
		}
		// else if(n%k==0){
		// 	cout << 2*(n/k) << endl;
		// }
		// else if(n%k!=0 && k<(n/2)+1){
		// 	cout << 2*(n/k) << endl;
		// }
		// else{
		// 	cout <<n/k<<endl;
		// }
	}
	return 0;	
}