#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        
        cin >> n;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int mini=b[0];
        int maxi = b[0];
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
           mini= min(b[i],mini);
           maxi= max(b[i],maxi);
            if(b[i] == mini || b[i] ==maxi  ) {
                
                flag=true;
                
            }
            else{
                flag= false;
                
                break;
            }
        }
        if(flag){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        
        

    }
    return 0;
}
