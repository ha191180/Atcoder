#include <iostream>
using namespace std;
int main(){
	int a,b,num1,num2,num3,max=-100000;
	cin >> a >> b;
	num1 = a+b;
	num2 = a-b;
	num3 = a*b;
	if (num1>max)max = num1;
	if (num2>max)max = num2;
	if (num3>max)max = num3;
	cout << max << endl;
	return 0;
	}
