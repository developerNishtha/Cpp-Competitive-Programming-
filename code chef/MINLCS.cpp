#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        int o=0;
        cin >>n;
        string a,b;
        cin >>a>>b;
        map<char,int> x,y;
        for(auto p:b){
            y[p]++;
        }
        for(auto p:a){
            x[p]++;
        }
        for(auto p='a';p<='z';++p){
            o=max(o,min(x[p],y[p]));
        }
        cout <<o<<endl;
        
	}
	return 0;	
}