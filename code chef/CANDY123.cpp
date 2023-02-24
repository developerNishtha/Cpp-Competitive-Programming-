#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int ans=0;
    int limak=1;
    int bob=2;
    while(t--){
        int a,b,x;
        cin >> a >> b;
        int ans=0;
        for (int i = 1; i < 1000; i+=2)
        {
            a-=i;
            b-=(i+1);

            if(a<0){
                cout << "Bob"<<endl;
                break;
            }
            else if(b<0){
                cout <<"Limak"<<endl;
                break;
            }
        }
    }
    
    return 0;

}