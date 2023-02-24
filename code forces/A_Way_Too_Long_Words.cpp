#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
for (int i = 0; i < n; i++)
{
    string s;
    cin >>s;
    if(s.length()<=10) cout <<s<<endl;
    else{
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
}

}

int main()
{
	int t=1;
	//cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}