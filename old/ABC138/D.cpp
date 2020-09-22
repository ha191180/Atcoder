#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<ll>>;


/*

struct vertex
{
  vector<int> rel;
  int parent = -1;
  ll count = 0;
};




void counter(vector<vertex> &tree, int target, int plus)
{
  vertex &nowtree = tree.at(target);
  nowtree.count += plus;
  for (auto &&i : nowtree.rel)
  {
    if (i != nowtree.parent)
    {
      counter(tree, i, plus);
    }

  }
  
  
}


int main(){
  int n,q;cin>>n>>q;
  vector<vertex> tree;
  tree.resize(n);
  tree.at(0).parent = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int a,b;cin>>a>>b;
    a--;b--;
    tree.at(a).rel.push_back(b);
    tree.at(b).rel.push_back(a);
  }
  vector<pair<int,int>> px(q);
  for (auto &&i : px)
  {
    cin >> i.first >> i.second;
  }


/*
  for (int i = 0; i < tree.size(); i++)
  {
    cout << "rels at " << i + 1 << ": ";
    for (auto &&j : tree.at(i).rel)
    {
      cout << j + 1 << " ";
    }
    cout << endl;

  }
*/
  

  
/*

  for (int i = 0; i < tree.size(); i++)
  {
    for (auto &&j : tree.at(i).rel)
    {
      if(tree.at(i).parent != -1){
        if (j != tree.at(i).parent)
          tree.at(j).parent = i;
      }

    }
    
  }

/*
  cout << "parents: ";
  for (auto &&i : tree)
  {
    cout << i.parent + 1 << " ";
    
  }
  cout << endl;
*/
  
  /*
  for (auto &&i : px)
  {
    int target = i.first;
    int plus = i.second;
    target--;
    counter(tree,target,plus);

  }
  
  printf("%d ",tree.at(0).count) ;
  for (int i = 1; i < n; i++)
  {
    printf("%d ",tree.at(i).count) ;
  }
  printf("\n") ;
  
  
}

*/


Graph g;
vector<ll> vals;
vector<ll> ans;

void dfs(int vertex, int parent, int sum)
{
  ans.at(vertex) += vals.at(vertex);
  ans.at(vertex) += sum;
  for (auto &&i : g.at(vertex))
  {
    if(i == parent)continue;
    dfs(i,vertex,ans.at(vertex));
  }
  

}

int main()
{
  int n,q;cin>>n>>q;
  g.resize(n);
  for (int i = 0; i < n - 1; i++)
  {
    int a,b;cin>>a>>b;
    a--;
    b--;
    g.at(a).push_back(b);
    g.at(b).push_back(a);
  }
  
  vals.resize(n);
  ans.resize(n);
  for (int i = 0; i < q; i++)
  {
    int p,x;cin>>p>>x;
    p--;
    vals.at(p) += x;
  }

  dfs(0,-1,0);
  
  cout << ans.at(0);
  for (int i = 1; i < n; i++)
  {
    cout << " " << ans.at(i);
  }
  cout << endl;

}
