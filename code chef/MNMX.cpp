#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    int a[n];
    int mn=0;
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    cout <<a[0]*(n-1)<<endl;
    

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