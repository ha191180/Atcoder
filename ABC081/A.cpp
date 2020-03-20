#include <iostream>
using namespace std ;
int main () {
	char s[3];
	int ans = 0;
	for(int i = 0 ; i < 3; i++){
		cin >> s[i];
		//error check
		//cout << s[i] ;

		//元々のコード
		if(s[i] == '1')ans++;


		//switch
		/*switch (s[i]) {
			case '1':ans++;break;
			case '0':break;
			default:break;
		}*/


 		//error check
		//out << ans << endl;
	}
	cout << ans << endl;
}
