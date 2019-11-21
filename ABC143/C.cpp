#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	char s[100000];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	//cout << s[5] << endl;
	char tmp = s[0];
	//if(tmp != s[0])cout << s[0] << endl;
	int ans = 0;
	for(int i = 0; i < n; i++){
		//cout << s[i] << " " << tmp << endl;
		if(tmp != s[i]){
			ans = ans + 1;
			tmp = s[i];
		}
	}
	cout << ans + 1 << endl;
}
