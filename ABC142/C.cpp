#include <iostream>
using namespace std;

int main(){
	int n,a,b[100000];
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a;
		b[a] = i;
	}
	for(int i = 1; i <= n; i++){
		cout << b[i];
		if(i != n)cout << " ";
	}
}