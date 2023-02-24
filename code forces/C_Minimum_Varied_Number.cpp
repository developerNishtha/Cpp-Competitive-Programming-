#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int s;
cin >>s;
int c=9;
vector<int> v;
while(s){
    if(s>c){
        v.push_back(c);
        s=s-c;
        c--;
    }
    else{
        v.push_back(s);
        s=0;
    }
}
int ans=0;
for (int i = v.size()-1; i >= 0; i--)
{
    ans=(ans*10+v[i]);
}
cout <<ans<<endl;

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