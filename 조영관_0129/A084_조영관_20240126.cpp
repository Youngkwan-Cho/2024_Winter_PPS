#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string str;
	string temp[1000];
	cin >> str;
	int l = str.length(); //입력받은 문자열의 길이 
	for(int i=0; i<l; i++){
		temp[i] = str.substr(i, l); //문자열의 i~l까지를 temp[i]에 복사 
	}
	sort(temp, temp+l); //오름차순 
	for(int i=0; i<l; i++){
		cout << temp[i] << endl;
	}
}