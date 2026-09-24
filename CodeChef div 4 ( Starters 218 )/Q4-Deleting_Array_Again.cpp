#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];

        int ans = 0;
        int tmpMin = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            tmpMin = min(tmpMin, c[i]);
            ans += a[i] * tmpMin;
        }
        cout << ans << nl;
    }
    return 0;
}