#include <iostream>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        string s = "abcdefghijklmnop";
        int n;
        cin >> n;
        string a;
        cin >> a;

        for (int i = 0; i < n / 4; i++)
        {
            int l = 0, r = 16, m = (l + r) / 2;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                if (a[j] == '0')
                {
                    r = m;
                    m = (l + r) / 2;
                }
                else
                {
                    l = m;
                    m = (l + r) / 2;
                }
            }
            cout << s[m];
        }
        cout << endl;
    }

    return 0;
}
