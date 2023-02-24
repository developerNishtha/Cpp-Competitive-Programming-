#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int a[5][5];
    int b=0,c=0;
for (int i = 0; i <5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cin >>a[i][j];
        if(a[i][j]==1){
            b=i+1;
            c=j+1;
        }
    }
    
}
cout <<abs(b-3)+abs(c-3)<<endl;

}

int main()
{
	int t=1;
	//cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}