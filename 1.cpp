#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum= 0;
	int factorial = 1;
	for(int i=1;1<=n;++i){
		factorial *= i;
		sum += factorial;
	}
	cout << sum;
	return 0;
}
