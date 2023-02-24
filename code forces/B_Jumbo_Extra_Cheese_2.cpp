#include <bits/stdc++.h>
using namespace std;
void nishtha(){
    int n;
        cin >>n;
        int a[n][2];
        long long sol=0;
        for (int i = 0; i < n; i++)
        {
            cin >>a[i][0]>>a[i][1];
            if(a[i][1]<a[i][0])
                swap(a[i][1],a[i][0]);
                sol+=a[i][0];
            
        }
            sol=sol*2;
            int maxi= a[0][1];
         
            for (int i = 1; i < n; i++)
            {
                maxi = max(maxi,a[i][1]);
            }
            cout << sol + 2*maxi << endl;
            
        
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