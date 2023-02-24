#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,a,x;
cin >>n;
if(n<10){
    cout <<n<<endl;
} 
else{
    x=10;
    a=9;
    while(n/x){
        if(n/(x*10)==0){
            a=a+(n/x);
        }
        else{
            a=a+9;
           
        }
         x=x*10;
    }
    cout <<a<<endl;
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