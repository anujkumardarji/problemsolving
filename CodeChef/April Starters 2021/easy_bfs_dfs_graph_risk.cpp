#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(0);
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n, m; cin >> n >> m;
        string Map[n];
        for (int i = 0; i < n; i++)cin >> Map[i];
        vector <int> lands;
        vector<pair<int, int>> d4{{0, 1}, {0, -1}, {1, 0}, { -1, 0}};

        auto inside = [&](pair<int, int> pt) {
            auto [x, y] = pt;
            return x >= 0 and y >= 0 and x < n and y < m;
        };

        auto land_fill = [&](int i, int j) {
            queue<pair<int, int>> q;
            Map[i][j] = '0';
            q.push({i, j});
            int sz = 0;
            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop(); sz++;
                for (auto [dx, dy] : d4) {
                    int xx = x + dx, yy = y + dy;
                    if (inside({xx, yy}) and Map[xx][yy] == '1') {
                        Map[xx][yy] = '0';
                        q.push({xx, yy});
                    }
                }
            }
            return sz;
        };

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (Map[i][j] == '1')
                    lands.push_back(land_fill(i, j));
            }
        }
        sort(lands.begin(), lands.end(), greater<int>());
        int chef = 0;
        for (int i = 1; i < (int)lands.size(); i += 2)
            chef += lands[i];
        cout << chef << '\n';
    }
    return 0;
}