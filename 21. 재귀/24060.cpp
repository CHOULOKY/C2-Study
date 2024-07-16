// Title: 알고리즘 수업 - 병합 정렬 1
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int num; string str;

void merge_sort(vector<int>& vec, int p, int r, int k);
void merge(vector<int>& vec, int p, int q, int r, int k);

int main(void) {
	int n, k; cin >> n >> k;
	vector<int> vec;
	for(int i=0; i<n; i++) {
		cin >> num;
		vec.push_back(num);
	}
	num = 0;
	merge_sort(vec, 0, n-1, k);
	// for(auto iter:vec) cout << iter << ' ';
	if(num < k) cout << -1;
	
	return 0;
}

void merge_sort(vector<int>& vec, int p, int r, int k) { // # A[p..r]을 오름차순 정렬한다.
	if(p < r) {
		int q = (p+r) / 2;			// # q는 p, r의 중간 지점
		merge_sort(vec, p, q, k);		// # 전반부 정렬
		merge_sort(vec, q+1, r, k);	// # 후반부 정렬
		merge(vec, p, q, r, k);		// # 병합
	}
}

// # A[p..q]와 A[q+1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
// # A[p..q]와 A[q+1..r]은 이미 오름차순으로 정렬되어 있다. 
void merge(vector<int>& vec, int p, int q, int r, int k) {
	int tmp[r+2];
	int i = p, j = q+1, t = 1;
	while(i <= q && j <= r) {
		if(vec[i] <= vec[j]) tmp[t++] = vec[i++];
		else tmp[t++] = vec[j++];
	}
	while(i <= q) tmp[t++] = vec[i++]; // # 왼쪽 배열 부분이 남은 경우
	while(j <= r) tmp[t++] = vec[j++]; // # 오른쪽 배열 부분이 남은 경우
	i = p; t = 1;
	while(i <= r) { // # 결과를 A[p..r]에 저장
		vec[i++] = tmp[t++];
		if(++num == k) cout << vec[i-1];
	}
}
