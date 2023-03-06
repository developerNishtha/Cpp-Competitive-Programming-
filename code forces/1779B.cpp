#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
if(n==3){
    cout<<"NO"<<endl;
    return;
}
if(n%2 !=0){
    cout<<"YES"<<endl;
    for (int i = 0; i < n; i++)
    {
        if(i%2 ==0){
            cout<<(n/2)-1<<" ";
        }
        else{
            cout<<-(n/2)<<" ";
        }
    }
    cout<<endl;
    
}
else if(n%2==0){
    cout<<"YES"<<endl;
    for (int i = 0; i < n/2; i++)
    {
        cout<<1<<" "<<-1<<" ";
    }
    cout<<endl;
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