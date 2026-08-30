#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int first_bad = -1;
    int last_bad = -1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            if (first_bad == -1)
            {
                first_bad = i;
            }
            last_bad = i;
        }
    }

    if (first_bad == -1)
    {
        cout << 0 << endl;
        return 0;
    }

    int answer = n;

    for (int i = 0; i <= first_bad + 1; i++)
    {
        int j = last_bad + 1;

        if (i == 0 || j == n || a[i - 1] != a[j])
        {
            if (j - i < answer)
            {
                answer = j - i;
            }
        }
    }

    cout << answer << endl;

    return 0;
}