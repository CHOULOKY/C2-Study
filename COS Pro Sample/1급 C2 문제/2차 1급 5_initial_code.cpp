// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    
    int dp[arr.size()+1];
    dp[0] = 0;
    for(int i=1; i<arr.size()+1; i++) {
    	if(arr[i-1] > arr[i-2]) dp[i] = dp[i-1]+1;
    	else dp[i] = 1;
    	answer = max(answer, dp[i]);
	}
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> arr = {3, 1, 2, 4, 5, 1, 2, 2, 3, 4};
    int ret = solution(arr);


    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}
