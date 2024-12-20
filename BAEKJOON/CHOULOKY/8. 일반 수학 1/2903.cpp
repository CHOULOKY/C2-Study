#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;
	
	bool isDown = true;
	int i=1, j=1;
	while(--n){
		if(isDown){
			if(j==1){
				i++;
				isDown = !isDown;
				continue;
			}
			i++; j--;
		}
		else {
			if(i==1){
				j++;
				isDown = !isDown;
				continue;
			}
			i--; j++;
		}
	}
	cout<<j<<'/'<<i;
}

