#include <iostream>

int main(){
	int a,b;
	bool c = 1;
	std::cin >> a >> b;
	if( 0 < a && a < 10 && 0 < b && b < 10 )std::cout << a*b << std::endl ;
	else std::cout << "-" << c;
}