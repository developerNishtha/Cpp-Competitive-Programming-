#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,i,j;
cin>>n;
        ll a[n],count=0,l,h;
        set<int>s;
        vector<int>v;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n==1)
            cout<<"YES"<<endl;
        else
        {
            for(i=0; i<n-1; i++)
            {
                if(a[i]!=a[i+1]&&i!=n-2)
                {
                    v.push_back(a[i]);
                }
                if(i==n-2)
                {
                    if(a[i]==a[i+1])
                    {
                        v.push_back(a[i]);
                    }
                    else
                    {
                        v.push_back(a[i]);
                        v.push_back(a[i+1]);
                    }
                }
            }
            for(i=1; i<v.size()-1; i++)
            {
                if(v[i-1]>v[i]&&v[i+1]>v[i])
                    count++;
            }
            if(v[0]<v[1])
                count++;
            if(v[v.size()-1]<v[v.size()-2])
                count++;
            if(v.size()==1||count==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            v.clear();
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