#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		string s;
	    cin >> s;
        int n=s.size();
	    int cnt = 0, check = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
	        {
	            cnt++;
	            if(cnt > 2)
    	        {
    	            check = 1;
    	            break;
    	        }   
	        }
	        else
	        {
	            cnt = 0;
	        } 
	    }
	    if(check)
	    {
	        cout << "HAPPY" << endl;
	    }
	    else
	    {
	        cout << "SAD" << endl;
	    }

	}
	return 0;	
}