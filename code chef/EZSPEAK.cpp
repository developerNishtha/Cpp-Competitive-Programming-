#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
        int n;
        cin >> n;
        string s;
        cin >>s;
        int ans=0;
        char a[5]={'a','e','i','o','u'};
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                
                ans=0;
            }
            else{
                ans+=1;
                
            }
            if(ans==4){
                break;
            }
        }
        if(ans != 4){
            cout << "yes" << endl;
        }
        else {cout << "no" << endl;}
        
	}
	return 0;	
}