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
        string s;
        cin >> s;
         int nishtha = 0;

        int qc = 0, ac = 0;
        if (s[s.length() - 1] != 'A')
        {
            cout << "No" << endl;
        }

        else
        {
           
            for (int i = s.length()-1; i >= 0; i--)
            {
                
                if (s[i] == 'Q')
                {
                    qc++;
                }
                else
                {
                    ac++;
                }
                if (qc > ac)
                {
                    cout << "No" << endl;
                    nishtha = 1;
                    break;
                }
            }
            if (!nishtha)
            {
                cout << "Yes" << endl;
            }
             
        }
        
           
    }
    return 0;
}