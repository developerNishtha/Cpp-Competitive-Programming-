#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int num,len;
        cin >>num >>len;
        if(num>len){
            cout << "-1" << endl;
            continue;
        }
        int y=len-num+1;
        cout << y << " ";
        for (int i = 1; i <= num; i++)
        {
            if(i != y){
                cout << i << " ";
            }
        }
        cout << endl;
        
	}
	return 0;	
}