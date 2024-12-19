#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str;cin>>str;int count=0;
	string target[]={"c=","c-","dz=","d-","lj","nj","s=","z="};
	for (int i = 0; i < sizeof(target) / sizeof(target[0]); i++) {
        size_t pos = 0;
        while ((pos = str.find(target[i], pos)) != string::npos) {
            count++;
            //str.erase(pos, target[i].size()); // ���꽺Ʈ�� ����
            str.replace(pos, target[i].size(), string(target[i].size(), '.'));
            pos += target[i].size(); // ���� �˻� ��ġ�� �̵�
        }
    }
	//count += str.length();
	count += count_if(str.begin(), str.end(), [](char c) { return c != '.'; });
	cout<<count;
}

