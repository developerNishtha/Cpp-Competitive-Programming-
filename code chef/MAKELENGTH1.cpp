#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    string s;
    cin >>s;
    if(n==1){
        cout <<"YES"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1'){
            if(s[i+1]=='1' && i<n-1 ){
                i++;
            }
            else{
                cout <<"NO"<<endl;
                return;
            }
        }
    }
    cout <<"YES"<<endl;
    
    
}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}