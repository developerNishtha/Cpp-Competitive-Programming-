#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
cin >>s;
ll total=1;
 for (int i = 0; i < n; i++)
    {
        if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
        {
            total = (total * 2) % 1000000007;
        }
    }
    cout <<total<<endl;
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