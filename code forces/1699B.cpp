#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m;
cin >>n>>m;
vector<vector<int>> a(n,(vector<int> (m,0)));
for(int i=0;i<n;i+=4) {
    for(int j=0;j<m;j+=4) {
        a[i][j]=1;
        if(i+1<n && j+1<m) a[i+1][j+1]=1;
        if(i+1<n && j+2<m) a[i+1][j+2]=1;
        if(i+2<n && j+1<m) a[i+2][j+1]=1;
        if(i+2<n && j+2<m) a[i+2][j+2]=1;
        if(i+3<n && j<m) a[i+3][j]=1;
        if(i<n && j+3<m) a[i][j+3]=1;
        if(i+3<n && j+3<m) a[i+3][j+3]=1;
        }
    }
 
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << a[i][j] << " ";
        } cout << endl;
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