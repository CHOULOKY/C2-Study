#include <iostream>
#include <map>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	map<int, int> x,y;
	for(int i=0;i<3;i++){
		int a,b;cin>>a>>b;
		x[a]++; y[b]++;
	}
	for(auto iter:x){
		if(iter.second%2!=0){
			cout<<iter.first<<' ';
			break;
		}
	}
	for(auto iter:y){
		if(iter.second%2!=0){
			cout<<iter.first;
			break;
		}
	}
}
