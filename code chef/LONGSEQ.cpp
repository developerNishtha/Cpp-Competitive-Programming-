#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    string s;
    cin >>s;
    int c0=0;
    int c1=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
    }
    if(c0==1 || c1==1){
        cout <<"Yes"<<endl;
    }
    else{
        cout <<"No"<<endl;
    }
    
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