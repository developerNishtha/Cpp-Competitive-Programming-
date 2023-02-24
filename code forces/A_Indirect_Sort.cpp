#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >>a[i];
      
     }
     if(a[0]==1){
        cout <<"Yes"<<endl;

     }
     else{
        cout <<"No"<<endl;
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