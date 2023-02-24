#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int k1=0,k2=0,count=1;
        int arr[10000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            else
            {
                if(count>k1)
                {
                    k1=count;
                    k2=arr[i];
                }
                count=1;
            }
        }
        cout<<k2<<" "<<k1<<endl;
	}
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int t;
// 	cin>>t;
// 	while(t--){
// 	   int n;
//        cin >>n;
//        int a[n];
//        int ans=0;
//        map<int,int> mp;
//        for (int i = 0; i < n; i++)
//        {
//        cin >>a[i];
//        mp[a[i]];
//        }
//        for(auto x:mp){
//             if(x.second>ans){
//                 ans=x.second;
//             }
//        }
//        for(auto x:mp){
//         if(ans==x.second){
//             cout << x.first<<" "<<x.second<<endl;
//             break;
//         }
//        }
       
// 	}
// 	return 0;
// }