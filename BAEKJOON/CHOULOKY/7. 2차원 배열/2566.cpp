#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int max=-1, x, y;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			int num;cin>>num;
			if(num>max){
				x=i;y=j;
				max=num;
			}
		}
	}
	cout<<max<<'\n'<<x+1<<' '<<y+1;
}

