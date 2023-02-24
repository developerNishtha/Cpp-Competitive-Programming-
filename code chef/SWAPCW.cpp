#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
cin >>s;
string s1=s;
sort(s1.begin(),s1.end());
for (int i = 0; i < n; i++)
{
    if(s[i]>s[n-1]){
        swap(s[i],s[n-1]);
    }
    n--;
}
if(s==s1){
    cout <<"YES"<<endl;
}
else{
    cout <<"NO"<<endl;
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