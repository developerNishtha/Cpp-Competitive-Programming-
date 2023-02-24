#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
       cin >> a[i] ;
       if(a[i] <= k){
           cout << "1" ;
           k -= a[i];
       }
       else{
           cout << "0";
       }
       
    }
    
    }
    
    
    return 0;

}
