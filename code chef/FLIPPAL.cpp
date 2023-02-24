#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != '1')
            {
                count2++;
            }
            else
            {
                count1++;
            }
        }

        
       
        
            if(n%2==0){
                if(count1%2 && count2%2){
                    cout <<"no"<<endl;
                }
                else{
                    cout <<"YES"<< endl;
                }
            }
            else{
                cout <<"Yes"<<endl;
            }
        
    }
    return 0;
}