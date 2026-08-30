#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int answer = 0;
    int cars = 0;

    for (int i = 1; i <= n; i++)
    {
        cars += freq[i];

        if (cars > 0)
        {
            answer = max(answer, cars - 1);
            cars--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cars += freq[i];

        if (cars > 0)
        {
            answer = max(answer, cars - 1);
            cars--;
        }
    }

    cout << answer << endl;

    return 0;
}