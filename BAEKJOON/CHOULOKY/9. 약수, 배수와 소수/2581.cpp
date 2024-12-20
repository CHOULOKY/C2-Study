#include <iostream>
#include <numeric>
#include <queue>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;cin>>a>>b;
	int arr[b+1]; iota(arr,arr+b+1,0);
	arr[1]=0;

	for (int i = 2; i <= sqrt(b); i++)
	{
		if (arr[i] == 0) continue;
		for (int j = 2 * i; j <= b; j += i)
		{
			arr[j] = 0;
		}
	}
	
	int result=0; queue<int> que;
	for(int i=a;i<=b;i++){
		if(arr[i]==0)continue;
		result+=arr[i];
		que.push(arr[i]);
	}
	
	if(que.empty()) cout<<-1;
	else cout<<result<<' '<<que.front();
}

