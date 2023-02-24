#include <bits/stdc++.h>
using namespace std;

void nishtha(){
int n;
        cin >>n;
        if(n%2==0){
           for (int i = 1; i <= n/2; i++){
           cout <<i +(n+1)/2 <<" "<<i<<" ";
        
           }
        }
         else{
            for (int i = 1; i <= n/2; i++)
            {
                cout <<i<<" "<<i+(n+2)/2<<" ";
            }
            if(n%2 !=0){
                cout <<(n+1)/2;
            }
            
            
         }
         cout <<endl;
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


