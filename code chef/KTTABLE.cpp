#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        int count=0;
        cin >> n;
        int a1[n];
        for (int i = 0; i < n; i++)
        {
           cin >> a1[i];
        }
        int a2[n];
        for (int i = 0; i < n; i++)
        {
           cin >> a2[i];
        }
        if(a1[0]>=a2[0]){
            count++;
        }
        for (int i = 1; i < n; i++)
        {
            if((a1[i]-a1[i-1])>= a2[i]){
                count++;
            }
        }
        cout << count << endl;
        
        
	}
	return 0;	
}