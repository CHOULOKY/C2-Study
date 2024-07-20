#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;

	vector<int> steps(n+1);
	steps[1] = 1;
	steps[2] = 2;
	steps[3] = 4;
	for(int i = 4; i <= n; i++)
		steps[i] = steps[i-1] + steps[i-2] + 1;
	answer = steps[n];

	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	int n1 = 3;
	int ret1 = solution(n1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("Solution: return value of the function is %d\n", ret1);

	int n2 = 4;
	int ret2 = solution(n2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("Solution: return value of the function is %d\n", ret2);
}
