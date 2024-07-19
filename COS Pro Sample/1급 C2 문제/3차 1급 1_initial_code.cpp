#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> func_a(vector<int> arr){
    int length = arr.size();
    vector<int> ret(length*2);
    for(int i = 0; i < length; i++)
        ret[i + length] = ret[i] = arr[i];
    return ret;
}

bool func_b(vector<int> first, vector<int> second){
    const int MAX_NUMBER = 1001;
    vector<int> counter(MAX_NUMBER, 0);
    for(int i = 0; i < first.size(); i++){
        counter[first[i]]++;
        counter[second[i]]--;
    }
    for(int i = 0; i < MAX_NUMBER; i++)
        if(counter[i] != 0)
            return false;
    return true;
}

bool func_c(vector<int> first, vector<int> second){
    int length = second.size();
    for(int i = 0; i < length; i++){
        int j;
        for(j = 0; j < length; j++)
            if(first[i + j] != second[j])
                break;
        if(j == length)
            return true;
    }
    return false;
}

bool solution(vector<int> arrA, vector<int> arrB) {
    if(arrA.size() != arrB.size())
        return false;
    if(func_b(arrA, arrB)){
        vector<int> arrA_temp = func_a(arrA);
        if(func_c(arrA_temp, arrB))
            return true;
    }
    return false;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> arrA1 = {1, 2, 3, 4};
    vector<int> arrB1 = {3, 4, 1, 2};
    bool ret1 = solution(arrA1, arrB1);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << (ret1 == true ? "true" : "false") << "." << endl;
    
    vector<int> arrA2 = {1, 2, 3, 4};
    vector<int> arrB2 = {1, 4, 2, 3};
    bool ret2 = solution(arrA2, arrB2);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << (ret2 == true ? "true" : "false") << "." << endl;
}
