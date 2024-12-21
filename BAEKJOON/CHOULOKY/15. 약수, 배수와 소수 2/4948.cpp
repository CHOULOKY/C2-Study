#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int num;
	while(cin >> num) {
		if(num == 0) break;
		bool arr[num*2+1]={false};
		arr[1] = true;
		for(int i=2; i*i<=num*2; i++) {
			if(arr[i] == true) continue;
			for(int j=i+i; j<=num*2; j+=i) {
				arr[j] = true;
			}
		}
		int count = 0;
		for(int i=num+1; i<=num*2; i++) {
			if(arr[i] == false) count++;
		}
		cout << count << '\n';
	}
}
