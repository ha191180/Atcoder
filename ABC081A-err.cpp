﻿#include <iostream>
using namespace std ;
int main () {
	string s;
	cin >> s;
	int ans = 0;
	for(int i=0;i<3;i++){
		if(s[i]='1'){
			++ans;
			}
		else
		{
			;
		}
	}
	cout << ans << endl;
}
