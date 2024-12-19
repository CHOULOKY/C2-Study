#include <iostream>
#include <sstream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	double result=0; int count=0;
	for(int i=0;i<20;i++){
		string str; getline(cin,str);
		stringstream stream(str);
		string a,b,c;
		stream>>a>>b>>c;
		double grade=0;
		switch(c[0]){
			case 'A':{
				if(c[1]=='+')grade=4.5;
				else grade=4;
				break;
			}
			case 'B':{
				if(c[1]=='+')grade=3.5;
				else grade=3;
				break;
			}
			case 'C':{
				if(c[1]=='+')grade=2.5;
				else grade=2;
				break;
			}
			case 'D':{
				if(c[1]=='+')grade=1.5;
				else grade=1;
				break;
			}
		}
		if(c[0]!='P'){
			result+=stoi(b)*grade;
			count+=stoi(b);
		}
	}
	cout<<result/count;
}
