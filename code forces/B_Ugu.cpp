#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >>n;
        string s;
        cin >>s;
        bool one = false;
      int prev = 1;
      int ans = 0;
      for(int i=0; i<n; i++){
            if(one){
                  if(prev==1 and s[i]=='0'){
                        ans++;
                        prev = 0;
                  }else if(prev==0 and s[i]=='1'){
                        ans++;
                        prev = 1;
                  }
            }else{
                  if(s[i]=='1')one=true;
            }
      }
      cout << ans << '\n';
        
	}
	return 0;	
}