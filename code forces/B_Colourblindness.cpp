#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s1, s2 ;
cin >>s1>>s2;

  
for (int i=0 ; i<s1.length(); i++)
{
    
     if(s1[i]=='G' ){
        s1[i]='B';
    }
    if(s2[i]=='G'){
        s2[i]='B';
    }
}

if(s1 == s2){
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