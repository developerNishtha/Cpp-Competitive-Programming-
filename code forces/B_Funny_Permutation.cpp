#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >>n;
        if(n==3){
            cout<<"-1"<<endl;
        }
        else {
            if(n%2==0){
                for (int i =n; i>=1; i--)
                {
                    cout << i <<" ";
                }
                cout <<endl;
                
            }
            else{
                for (int i = (n+1)/2; i <=n; i++)
                {
                    cout << i<<" ";
                }
                for (int i = n/2; i >=1; i--)
                {
                    cout << i<<" ";
                }
                cout <<endl;
                
                
            }
        }
	}
	return 0;	
}