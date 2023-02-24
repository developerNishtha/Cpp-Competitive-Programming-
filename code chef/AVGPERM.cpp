#include <bits/stdc++.h>
using namespace std;

void ans(){
    int size;
        cin >> size;
        if(size == 3){
            cout << "1 2 3" << endl;
            return;
        }
        cout << size << " " << size-2 << " " ;
        for (int i = 1; i < size-3; i++)
        {
            cout << i << " ";

        }
        cout << size-3 << " " << size - 1  ;
        cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--){
		ans();
	}
	return 0;	
}