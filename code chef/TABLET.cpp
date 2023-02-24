#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
    int area=0;
	while (t--){
		int n,b;
        cin >>n>>b;
        int w[n],p[n],h[n];
        int ans=0;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            cin >> h[i];
            cin >>p[i];
            if(p[i]<=b){
                count++;
                if(ans<w[i]*h[i]){
                    ans=w[i]*h[i];
                }
            }   
        }
        if(count>0){
            cout <<ans <<endl;
        }
        else{cout << "no tablet" <<endl;}
        
	}
	return 0;	
}