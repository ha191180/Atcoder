# include<iostream>

using namespace std;

int main(void){
  int a, b, c, x, cnt=0;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;
  for(int i=0; i<=x/500; ++i){
    for(int j=0; j<=(x-500*i)/100; ++j){
      if(i <= a && j <= b && (x - (i*500 + j*100))/50 <= c)
        cnt++;
    }
  }

  cout << cnt << '\n';
  return 0;
}
