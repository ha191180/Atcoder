#include <iostream>
using namespace std;

int main(){
	int n, start,x,y;
	cin >> n ;
	if(n % 2 == 0){
		start = n / 2;
	}else{
		start = (n + 1) / 2;
	}
	for(int i = start ; i < n ; i++){
		if(n % i == 0){
			x = i;
			y = n / i;
			i = n;
		}
	}
	cout << x + y -2 << endl;
	return 0;
}
