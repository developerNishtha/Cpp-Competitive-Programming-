#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
        cin>> s;
        // s = str;
        int len =s.size();
        string lshift = s.substr(1, len-1) + s.substr(0, 1);
	    string rshift = s.substr(len-1, 1) + s.substr(0, len-1);
        if(lshift == rshift)
        cout <<  "YES"<<endl;
        else 
        cout << "NO"<<endl;
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


 