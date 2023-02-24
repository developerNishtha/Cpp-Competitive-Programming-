// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	// int t;
// 	// cin >> t;
// 	// while (t--){
// 		long long n,m;
//         cin >>n>>m;
//         vector<long long> v(n);
//         for (long long i = 0; i < n; i++)
//         {
//             long long x;
//             cin >>x;
//             v[i]=x;
            
//         }
//         vector<long long> ltr(n,0);
//         vector<long long> rtl(n,0);
//         for (long long i = 1; i < n; i++)
//         {
//             if(v[i]<v[i-1]){
//                 ltr[i]=ltr[i-1]+(v[i-1]-v[i]);
//             }
//             else{
//                 ltr[i]=ltr[i-1];
//             }
//         }
//         for (long long i = n-2; i >= 0; i--)
//         {
//             if(v[i]<v[i-1]){
//                 rtl[i]=rtl[i+1]+(v[i+1]-v[i]);
//             }
//             else{
//                 rtl[i]=rtl[i+1];
//             }
//         }
//         for (long long i = 0; i < m; i++)
//         {
//             int x,y;
//             cin >>x>>y;
//             x--,y--;
//             if(x<y){
//                 cout <<ltr[y]-ltr[x]<<endl;
//             }
//             else{
//                 cout <<rtl[y]-rtl[x]<<endl;
//             }
//        // }
        
        
        
        
// 	}
// 	return 0;	

// }


#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl

int main()
{
    int n, m;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        ll x;
        cin>>x;
        v[i] = x;
    }
    
    vector<ll> lefToright(n, 0);
    vector<ll> rightToleft(n, 0);
    
    for(int i = 1; i < n; i++) {
        if(v[i] < v[i-1]) {
            lefToright[i] = lefToright[i-1] + (v[i-1] - v[i]);
        }
        else lefToright[i] = lefToright[i-1];
    }
    
     for(int i = n-2; i >= 0; i--) {
        if(v[i] < v[i+1]) {
            rightToleft[i] = rightToleft[i+1] + (v[i+1] - v[i]);
        }else {
            rightToleft[i] = rightToleft[i+1];
        }
    }
    
    for(int i = 0; i < m; i++) {
        int x, y;
        cin>>x>>y;
        x--, y--;
        
        if(x < y) {
            cout<<lefToright[y] - lefToright[x]<<endl;
        }
        else {
            cout<<rightToleft[y] - rightToleft[x]<<endl;
        }
    }
    

    return 0;
}