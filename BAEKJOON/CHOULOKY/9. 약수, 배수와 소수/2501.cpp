#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;cin>>a>>b;
	int i=0, result=0;
	while(1){
		if(a%++i==0){
			b--;
			if(b==0){
				result=i;
				break;
			}
		}
		else if(i>a)break;
	}
	cout<<result;
}

