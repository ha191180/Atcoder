#include<iostream>
using namespace std;

bool dividable(int n, int a[]){
  for (int i = 0; i < n; i++) {
    switch (a[i] % 2) {
      case 0:break;
      default:return false;
    }
  }
  return true;
};

void update(int n, int a[]){
  for (int i = 0; i < n; i++) {
    a[i] = a[i] / 2;
  }
};

void input(int n, int a[]){
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
};

int main(){
  int n,a[200],counter = 0;
  cin >> n ;
  input(n,a);
  while (dividable(n,a)) {
    update(n,a);
    counter++;
  }
  cout << counter << endl;
}
