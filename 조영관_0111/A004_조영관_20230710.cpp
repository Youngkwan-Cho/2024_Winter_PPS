#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int check=0;
    vector<int>::iterator itor;
    for (itor = arr.begin(); itor != arr.end(); itor++) {
        if (*itor%divisor==0) {
            check=1;
            answer.push_back(*itor);
        }
    }
    if (check==0) answer.push_back(-1);
    else sort(answer.begin(), answer.end());
    return answer;
}