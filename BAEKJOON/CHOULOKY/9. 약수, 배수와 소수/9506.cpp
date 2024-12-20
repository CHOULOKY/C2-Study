#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while(cin>>n){
		if(n==-1)break;
		int i=0, result=0;
		vector<int> vec;
		while(1){
			if(++i>=n)break;
			else if(n%i==0){
				vec.push_back(i);
				result+=i;
			}
		}
		if(result==n){
			cout<<n<<" = "<<vec[0];
			for(int k=1;k<vec.size();k++) cout<<" + "<<vec[k];
		}
		else cout<<n<<" is NOT perfect.";
		cout<<'\n';
	}
}

