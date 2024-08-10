// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int solution(int number, int target) {
	// 여기에 코드를 작성해주세요.
	int answer = 0;
	
	vector<int> visited(target*2);
	queue<pair<int, int>> que;
	que.push({number, 0});
	visited[number] = true;
	
	while(!que.empty()) {
		int cur = que.front().first;
		int count = que.front().second;
		que.pop();
		if(cur == target) {
			answer = count;
			break;
		}
		if(!visited[cur+1]) {
			que.push({cur+1, count+1});
			visited[cur+1] = true;
		}
		if(!visited[cur-1]) {
			que.push({cur-1, count+1});
			visited[cur-1] = true;
		}
		if(!visited[cur*2]) {
			que.push({cur*2, count+1});
			visited[cur*2] = true;
		}
	}
	
	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	int number1 = 5;
	int target1 = 9;
	int ret1 = solution(number1, target1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Solution: return value of the function is " << ret1 << " ." << endl;

	int number2 = 3;
	int target2 = 11;
	int ret2 = solution(number2, target2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Solution: return value of the function is " << ret2 << " ." << endl;
}
