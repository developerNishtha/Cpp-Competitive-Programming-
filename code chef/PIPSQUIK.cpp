#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,h,y1,y2,l;
int c=0;
cin >>n>>h>>y1>>y2>>l;
int t[n],x[n];
for (int i = 0; i < n; i++)
{
    cin >>t[i]>>x[i];
    if(l!=0){
        if(t[i]==1){
        if(x[i]>=h || x[i]>=(h-y1)){
            c++;
        }
        else {
            l--;
            if(l!=0)
             c++;
            
        }
    }
    else{
        if(x[i]<=y2 ){
            c++;
        }
        else {
            l--;
            if(l!=0)
             c++;
    }
    }
}
}
cout <<c<<endl;
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