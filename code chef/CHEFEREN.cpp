#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int N, A, B;
    cin >> N >> A >> B;

    int total_duration = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            total_duration += A;
        }
        else
        {
            total_duration += B;
        }
    }

    cout << total_duration << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}
