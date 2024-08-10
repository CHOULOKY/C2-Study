// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int dirX[8] = {1, -1, 0, 0};
int dirY[8] = {0, 0, 1, -1};
int solution(int n, vector<vector<int>> garden) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    
    vector<vector<int>> visited(n, vector<int>(n, 0));
    queue<pair<int, int>> que;
    
    for(int i=0; i<n; i++) {
    	for(int j=0; j<n; j++) {
    		if(garden[i][j] == 1) {
    			que.push({i, j});
    			visited[i][j] = 1;
			}
		}
	}
	
	while(!que.empty()) {
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		
		for(int i=0; i<4; i++) {
			int nextX = x + dirX[i];
			int nextY = y + dirY[i];
			if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < n) {
				if(visited[nextX][nextY] == 0) {
					que.push({nextX, nextY});
					visited[nextX][nextY] = visited[x][y] + 1;
				}
			}
		}
	}
	
	for(int i=0; i<n; i++) {
    	for(int j=0; j<n; j++) {
    		answer = max(answer, visited[i][j]);
		}
	}
    
    return answer-1;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int n1 = 3;
    vector<vector<int>> garden1 = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    int ret1 = solution(n1, garden1);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret1 << " ." << endl;
    
    int n2 = 2;
    vector<vector<int>> garden2 = {{1, 1}, {1, 1}};
    int ret2 = solution(n2, garden2);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret2 << " ." << endl;
}
