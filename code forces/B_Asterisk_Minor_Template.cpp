#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string a,b;
cin >>a>>b;
if(a.size()==1 && b.size()==1){
    if(a==b) {
        cout <<"YES"<<endl;
        cout<<b<<endl;
        return;
    }
}
if(a[0]==b[0] || a[a.length()-1]==b[b.length()-1]){
    cout <<"YES"<<endl;
    if(a[a.length()-1]==b[b.length()-1]){
        cout <<"*"<<a[a.length()-1]<<endl;
    }
    else{
        cout <<a[0]<<"*"<<endl;
    }
    return;
}
for (int i = 0; i < a.length(); i++)
{
    for (int j = 0; j < b.length(); j++)
    {
        if(a[i]==b[j] && a[i+1]==b[j+1]){
            cout <<"YES"<<endl;
            cout<<"*"<<a[i]<<a[i+1]<<"*"<<endl;
            return;
        }
    }
    
}
cout <<"NO"<<endl;
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