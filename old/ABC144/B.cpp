#include <iostream>
using namespace std;

int main(){
	int n;
	bool ans = 0;
	cin >> n;
	for(int i = 1; i < 10; i++){
		if( n % i == 0 && n / i < 10){
			ans = 1;
		}
	}
	switch(ans)
	{
		case 1 :
		cout << "Yes";
		break;
		case 0 :
		cout << "No";
		break;
	}
}
