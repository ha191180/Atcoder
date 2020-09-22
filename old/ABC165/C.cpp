#include <bits/stdc++.h>
using namespace std;


struct nums{
  int a;
  int b;
  int c;
  int d;
};




int main(){
  int n, m, q; cin >> n >> m >> q;
  vector<nums> numrow(q);
  vector<int> A(n);
  unsigned long long ans = 0;
  for (int i = 0; i < q; i++)
  {
    cin >> numrow.at(i).a >> numrow.at(i).b >> numrow.at(i).c >> numrow.at(i).d;
    numrow.at(i).a--;
    numrow.at(i).b--; //zero indexed
  }
  
  int a[10];
  for (a[0] = 1; a[0] <= m; a[0]++)
  for (a[1] = a[0]; a[1] <= m; a[1]++)
  for (a[2] = a[1]; a[2] <= m; a[2]++)
  for (a[3] = a[2]; a[3] <= m; a[3]++)
  for (a[4] = a[3]; a[4] <= m; a[4]++)
  for (a[5] = a[4]; a[5] <= m; a[5]++)
  for (a[6] = a[5]; a[6] <= m; a[6]++)
  for (a[7] = a[6]; a[7] <= m; a[7]++)
  for (a[8] = a[7]; a[8] <= m; a[8]++)
  for (a[9] = a[8]; a[9] <= m; a[9]++)
  {
    unsigned long long tmp = 0;
    for (int i = 0; i < n; i++)
    {
      A.at(i) = a[i];
    }

    /*
    for (auto &&i : A)
    {
      cout << i << " ";
    }
    cout << endl;
    */

    for (int j = 0; j < q; j++)
    {
      if(A.at(numrow.at(j).b) - A.at(numrow.at(j).a) == numrow.at(j).c)tmp += numrow.at(j).d;
    }
    //cout << "tmp: " << tmp << endl;
    ans = max(tmp, ans);

  }
  
  cout << ans << "\n";
  
}