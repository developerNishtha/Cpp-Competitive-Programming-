#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int x1,x2,y1,y2;
cin >>x1>>y1>>x2>>y2;
   for(int i = 1; i <= 8; i ++){
        for(int j = 1; j <= 8; j ++){
            if(abs(x1 - i) == 1 && abs(y1 - j) == 2 && ((abs(x2 - i) == 2 && abs(y2 - j) == 1) || (abs(x2 - i) == 1 && abs(y2 - j) == 2))) {
                cout <<"YES"<<endl;
                return;
            }
            if(abs(x1 - i) == 2 && abs(y1 - j) == 1 && ((abs(x2 - i) == 2 && abs(y2 - j) == 1) || (abs(x2 - i) == 1 && abs(y2 - j) == 2))) {
                cout <<"YES"<<endl;
                return;
            }
             
            
        }
    }
cout <<"NO"<<endl;

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