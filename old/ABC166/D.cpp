#include <bits/stdc++.h>
using namespace std;
long long xx5(long long i){
  return i * i * i * i * i;
}


int main(){
  long long x; cin >> x;
  long long a = 0,b = 0;
  for (a = -200; a <= 200; a++)
  {
    for (b = -200; b <= 200; b++)
    {
      if(xx5(a) - xx5(b) == x)
      goto OUT;
    }
    
  }
  OUT:
  cout << a << " "<< b << endl;
} 