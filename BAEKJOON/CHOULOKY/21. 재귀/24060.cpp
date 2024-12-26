#include <iostream>
#include <vector>
using namespace std;

void merge_sort(vector<int>& vec, int p, int r);
void merge(vector<int>& vec, int p, int q, int r);
int n, k, result=-1;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	cin >> n >> k;
	vector<int> vec;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	
	merge_sort(vec, 0, vec.size()-1);
	
	cout << result;
}

void merge_sort(vector<int>& vec, int p, int r) {
	if(p < r) {
		int q = (p + r) / 2;
		merge_sort(vec, p, q);
		merge_sort(vec, q+1, r);
		merge(vec, p, q, r);
	}
}

void merge(vector<int>& vec, int p, int q, int r) {
	int i=p, j=q+1, t=1;
	vector<int> temp(r-p+2);
	
	while(i <= q && j <= r) {
		if(vec[i] <= vec[j]) {
			temp[t++] = vec[i++];
		}
		else {
			temp[t++] = vec[j++];
		}
	}
	while(i <= q) {
		temp[t++] = vec[i++];
	}
	while(j <= r) {
		temp[t++] = vec[j++];
	}
	
	i=p; t=1;
	while(i <= r) {
		vec[i++] = temp[t++];
		if(--k == 0) result = temp[t-1];
	}
}
