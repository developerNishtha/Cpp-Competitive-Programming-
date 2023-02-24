#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    for (int i = n; i >0; i--)
    {
        if(i%2==0){
            cout <<i<<" ";
        }
    }
    for (int i = n; i >0; i--)
    {
        if(i%2 !=0){
            cout <<i<<" ";
        }
    }
    
    
}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
	}
    cout <<endl;
	return 0;	
}