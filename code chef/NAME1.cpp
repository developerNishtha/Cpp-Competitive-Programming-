#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string a,b;
cin >>a>>b;
int n;
cin >>n;
string arr[n];
string d;
bool flag = false;
for (int i = 0; i < n; i++)
{
    cin >>arr[i];
    d+=arr[i];
}
string c= a + b;
int x=0,y=0;
sort(c.begin(),c.end());
sort(d.begin(),d.end());
for (int i = 0; i < c.size(); i++)
{
    if(c[i]==d[x]){
        x++;
        y++;
    }
}
if(y==d.size()){
    cout <<"YES"<<endl;
}
else {
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