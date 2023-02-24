#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
cin >>s;
bool flag=false;
//int i=0;
if(n%3==2){
    cout <<"NO"<<endl;
    return;
}
for (int i = 0; i < n-2; i++)
{
    if(i%3 == 0 && s[i+1] != s[i+2] ){
        cout <<"NO"<<endl;
        return;
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