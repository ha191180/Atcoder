#include <iostream>
using namespace std;

int main(){
	int n,k,h,counter;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> h;
		if(h >= k)counter++;
	}
	cout << counter;
}
