#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		double a,b,n;
        double x,y,o,p;
        cin >>n>>x>>y>>a>>b;
        o=(x/a)*n;
        p=(y/b)*n;
        if(o==p){
            cout << "any" <<endl;

        }
        else if(o>p){
            cout << "DIESEL" << endl;
        }
        else{
            cout <<"Petrol"<< endl;
        }



	}
	return 0;	
}