#include <bits/stdc++.h>
using namespace std;


int main(){
  int k;cin>>k;
  queue<unsigned long long> lunluns;
  for (unsigned long long i = 1; i < 10; i++)
  {
    lunluns.push(i);
  }
  for (int i = 1; i < k; i++)
  {
    unsigned long long tmp = lunluns.front();
    lunluns.pop();
    if (tmp % 10 != 0)
    {
      lunluns.push(tmp * 10 + (tmp % 10) - 1);
    }
      lunluns.push(tmp * 10 + (tmp % 10));
    if (tmp % 10 != 9)
    {
      lunluns.push(tmp * 10 + (tmp % 10) + 1);
    }
  }
  cout << lunluns.front() << endl;
  
}