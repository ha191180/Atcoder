#include <bits/stdc++.h>
using namespace std;
int digit(int n,int k)
{
  int ret = 1;
  while(n/k!=0){
    n /= k;
    ret++;
  }
  return ret;
}


int main(){
  int n,k;cin>>n>>k;
  cout << digit(n,k) << endl;
}