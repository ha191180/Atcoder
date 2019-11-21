#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int n, l[2000],ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++)cin >> l[i];
	for(int i = 0; i < n - 2; i++){
		//cout << l[i] << " ";
		
	for(int j = i+1; j < n - 1; j++){
		//cout << l[j] << " ";
		
	for(int k = j+1; k < n; k++){
		//cout << l[i] << " " << l[j] << " " << l[k] << endl;
		//cout << i << " " << j << " " << k << endl;
		
	if(l[i] < l[j] + l[k] && l[j] < l[i] + l[k] && l[k] < l[j] + l[i])ans++;
		}
		}
		}
	cout << ans << endl;
	}
