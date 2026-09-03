#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> g(n + 1);

        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;

            g[a].push_back(b);
            g[b].push_back(a);
        }

        int s;
        cin >> s;

        vector<int> dist(n + 1, -1);
        queue<int> q;

        q.push(s);
        dist[s] = 0;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            for(int i = 0; i < g[node].size(); i++)
            {
                int next = g[node][i];

                if(dist[next] == -1)
                {
                    dist[next] = dist[node] + 6;
                    q.push(next);
                }
            }
        }

        for(int i = 1; i <= n; i++)
        {
            if(i != s)
            {
                cout << dist[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
