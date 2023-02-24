#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin >> t;
	while (t--){
		ll  n;
        cin >>n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >>v[i];
           
        }
        sort(v.begin(),v.end());
       ll ans=0;
       for (ll i = 0; i < n-2; i++)
       {
        ans = max(ans, v[i+1]-v[i] + v[n-1]-v[i]);
       }
       for (ll i = n-1; i >= 2; i--)
       {
        ans = max(ans, v[i]-v[i-1] + v[i]-v[0]);
       }
       cout <<ans<<endl;
       
        
	}
	return 0;	
}


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define sortall(x) sort(all(x))


// typedef pair<ll, ll>  pii;
// typedef pair<ll, ll> pl;
// typedef vector<ll> vi;
// typedef vector<ll> vl;
// typedef vector<pii> vpii;
// typedef vector<pl> vpl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;

// ll MOD=1000000007;
// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for(ll i=0;i<n;i++) {
//         cin >> a[i];
//     }
//     sort(all(a));
//     ll ans = INT_MAX;
//     ll mx = a[n-1];
//     ll mn = a[0];
//     for(ll i=1;i<n-1;i++) {
//         ll x = abs(a[i]-mx)+abs(mx-mn);
//         ans = min(ans,x);
//     }

//     cout << ans << endl;
// }
 
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while(t--) {
//        solve();
//     }
// return 0;
// }