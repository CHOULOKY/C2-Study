#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;cin>>a>>b;for(int i=0;i<a;i++){
		int num;cin>>num;if(num<b)cout<<num<<' ';
	}
}
