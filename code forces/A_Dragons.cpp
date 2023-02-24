#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,s;
cin >>s>>n;
int x[n],y[n];
bool flag=false;
vector<pair<int,int>> p;
for (int i = 0; i < n; i++)
{
    cin >>x[i]>>y[i];
    p.push_back(make_pair(x[i],y[i]));
}
sort(p.begin(),p.end());
// for (int i = 0; i < n; i++)
// {
//     cout <<p[i].first<<" "<<p[i].second<<endl;
// }

for (int i = 0; i < n; i++)
{
    if(s<=p[i].first){
        cout<<"NO"<<endl;
        return;
    }
    else{
        s+=p[i].second;   
    }
}
cout <<"YES"<<endl;
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