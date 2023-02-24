#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long temp,i;
        sort(a,a+n);
        i=1;
        while(i<n-1){
	        temp=a[i];
	        a[i]=a[i+1];
	        a[i+1]=temp;
	        i=i+2;
	    }
         for(i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
        cout <<endl;

    }

    return 0;
}