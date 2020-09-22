#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;
vector<ll> G[100005];
ll par[100005];
bool seen[100005];

void dfs(int prev, int v)
{
  seen[v] = true;
  par[v] = prev;
  for (auto next_v : G[v])
  {
    if (seen[next_v])
      continue;
    dfs(v, next_v);
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  ll dist[100005];
  ll ans[100005]; 
  queue<int> que;

  fill(dist,dist + 100005,-1);
  fill(ans,ans + 100005,-1);
  

  
  dist[1] = 0;
  ans[1] = 1;
  que.push(1); 


  while (!que.empty())
  {
    int v = que.front(); 
    que.pop();

    
    for (int nv : G[v])
    {
      if (dist[nv] != -1)
        continue; 

      ans[nv] = v;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }



  bool flagseen = true;
  for (int i = 1; i <= n; i++)
  {
    if (dist[i] == -1)
      flagseen = false;
  }

  if (flagseen)
  {
    cout << "Yes" << endl;
    for (int i = 2; i <= n; i++)
    {
      cout << ans[i] << endl;
    }
  }
  else
  {
    cout << "No" << endl;
  }
}