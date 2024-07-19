// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int count=0;
void pick(vector<int>& picked, int size, int n, vector<int>& arr, int K) {
	if(n==0) {
		int result=0;
		for(auto iter:picked) {
			result += arr[iter];
		}
		if(result % K == 0) count++;
		return;
	}
	int start = picked.empty() ? 0 : picked.back()+1;
	for(int i=start; i<size; i++) {
		picked.push_back(i);
		pick(picked, size, n-1, arr, K);
		picked.pop_back();
	}
}
int solution(vector<int> arr, int K) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    
    vector<int> picked;
    pick(picked, arr.size(), 3, arr, K);
    
    return (answer=count);
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int K = 3;
    int ret = solution(arr, K);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}
