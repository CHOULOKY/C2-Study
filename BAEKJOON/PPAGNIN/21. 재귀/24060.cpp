// Title: �˰��� ���� - ���� ���� 1
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

void merge_sort(vector<int>& vec, int p, int r, int k) { // # A[p..r]�� �������� �����Ѵ�.
	if(p < r) {
		int q = (p+r) / 2;			// # q�� p, r�� �߰� ����
		merge_sort(vec, p, q, k);		// # ���ݺ� ����
		merge_sort(vec, q+1, r, k);	// # �Ĺݺ� ����
		merge(vec, p, q, r, k);		// # ����
	}
}

// # A[p..q]�� A[q+1..r]�� �����Ͽ� A[p..r]�� �������� ���ĵ� ���·� �����.
// # A[p..q]�� A[q+1..r]�� �̹� ������������ ���ĵǾ� �ִ�. 
void merge(vector<int>& vec, int p, int q, int r, int k) {
	int tmp[r+2];
	int i = p, j = q+1, t = 1;
	while(i <= q && j <= r) {
		if(vec[i] <= vec[j]) tmp[t++] = vec[i++];
		else tmp[t++] = vec[j++];
	}
	while(i <= q) tmp[t++] = vec[i++]; // # ���� �迭 �κ��� ���� ���
	while(j <= r) tmp[t++] = vec[j++]; // # ������ �迭 �κ��� ���� ���
	i = p; t = 1;
	while(i <= r) { // # ����� A[p..r]�� ����
		vec[i++] = tmp[t++];
		if(++num == k) cout << vec[i-1];
	}
}
