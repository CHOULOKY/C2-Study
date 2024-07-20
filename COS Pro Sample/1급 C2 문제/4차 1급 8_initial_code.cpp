// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> vec;
void pick(vector<int>& card, vector<int>& picked, int n) {
	if(n==0) {
		string str="";
		for(auto iter:picked) {
			str += to_string(card[iter]);
		}
		vec.push_back(stoi(str));
		return;
	}
	for(int i=0; i<card.size(); i++) {
		if(find(picked.begin(), picked.end(), i) != picked.end()) continue;
		picked.push_back(i);
		pick(card, picked, n-1);
		picked.pop_back();
	}
}
int solution(vector<int> card, int n) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    vec.clear();
    
    vector<int> picked;
    pick(card, picked, card.size());
    
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    
    auto result = find(vec.begin(), vec.end(), n);
    if(result != vec.end()) answer = result - vec.begin() + 1;
    else answer = -1;
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> card1 = {1, 2, 1, 3};
    int n1 = 1312;
    int ret1 = solution(card1, n1);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret1 << "." << endl;
    
    vector<int> card2 = {1, 1, 1, 2};
    int n2 = 1122;
    int ret2 = solution(card2, n2);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret2 << "." << endl;
}
