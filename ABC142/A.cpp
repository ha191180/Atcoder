#include <iostream>
#include <iomanip>
using namespace std;

/*int main(){
	fixed;
	setprecision(10);
	int n;
	cin >> n;
	if(n % 2 == 0){
		cout << fixed << setprecision(10) << 0.5000000000 << endl;
	}else if(n == 1){
		cout << 1 << endl;
	}else{
		n = static_cast<double>(n);
		n--;
		n = ((n / 2) + 1 ) / (n + 1);
		cout << fixed << setprecision(10) << n << endl;
	}
}
*/

int N;

void solve() {
    cin >> N;
    cout.precision(10);
    cout << (double)(N - N / 2) / (double)N << endl;
    return;
}

int main() {
    solve();
    return 0;
}
