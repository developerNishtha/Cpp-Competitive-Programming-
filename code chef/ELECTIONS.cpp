#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int a,b,c;
        cin >>a >>b>>c;
        if(a>b &&a >c && a>50){
            cout <<"A" <<endl;

        }
        else if(b>a && b>c && b>50){
            cout <<"B" <<endl;
        }
        else if(c>a && c>b && c>50){
            cout << "C" << endl;
        }
        else{
            cout <<"NOTA" << endl;
        }
	}
	return 0;	
}