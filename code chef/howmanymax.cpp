#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count=1;
        //n-1
        //n-2
        for (int i = 0; i < n-2; i++)
        {
            if(s[i]=='1' && s[i+1]=='0') {
                count++;
            }
        }
        cout << count << endl;
        

    }
    return 0;
}
