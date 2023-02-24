#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll num;
short temp = 0;
cin>>num;
vector<ll> v;
while(num!=0){
    temp = num%10;
    v.push_back(temp);
    num /= 10;
}
reverse(v.begin(),v.end());
// for (ll i = 0; i < v.size(); i++)
// {
//    cout << v.at(i) << ' ';
// }
//cout <<endl;
bool flag=false;
for (ll i = 0; i < v.size(); i++)
{
    if(v[i]==1 &&v[i+1]==4 && v[i+2]==4){
        i+=2;
        flag=true;
    }
    else if(v[i]==1 && v[i+1]==4){
        i+=1;
        flag=true;
    }
    else if(v[i]==1){
        flag=true;
    }
    else{
        flag=false;
        cout <<"NO"<<endl;
        return;
    }
}
if(flag==true){
    cout <<"YES"<<endl;
}
else cout<<"NO"<<endl;
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