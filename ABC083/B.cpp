#include <iostream>
using namespace std;
int main(){
	int n, a, b, i, x;
	cin >> n >> a >> b;
	for (i = 1 ; i <= n ; i++ ){
		int i0, i1, i2, i3, i4;
		i4 = i/10000;
		i3 = i/1000-10*i4;
		i2 = i/100 - 100*i4 - 10*i3;
		i1 = i/10 - 1000*i4 - 100*i3 - 10*i2;
		i0 = i - 10000*i4 - 1000*i3 - 100*i2 - 10*i1;
		if ( a <= i4+i3+i2+i1+i0 && i4+i3+i2+i1+i0 <= b ){
			x = x + i ;
			}
		}
	cout << x;
}
