#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> b(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    int answer = 0;

    for (int k = 0; k <= n - 1; k++)
    {
        int ok = 1;

        for (int i = 0; i < k - 1; i++)
        {
            if (b[i] < b[i + 1])
            {
                ok = 0;
                break;
            }
        }

        for (int i = k; i < n - 2; i++)
        {
            if (b[i] > b[i + 1])
            {
                ok = 0;
                break;
            }
        }

        if (ok == 1)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}