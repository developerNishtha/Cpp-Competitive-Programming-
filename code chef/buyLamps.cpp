#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,x,y,a;
        cin >> n >> k >> x >> y;
        int ans1 = 0;
        int ans2 = 0;
        ans1= k*x;
        if(x<y){
            cout << n*x << endl;
        }
        else {
            if((n-k)==0){
            cout << ans1 << endl;
        }
        else{
            a=n-k;
            ans2=a*y;
            cout << ans1 + ans2 << endl;
        }
        }
        
    }
    return 0;
}