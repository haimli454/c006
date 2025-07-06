#include <iostream>
#include <vector>
using namespace std;

int main(){
    int casenum;
    
    int sum = 0;
    double highavg;
    vector <vector<int>> s;
    vector<int> v;
    cin >> casenum;
    double *avg = new double[casenum];
    int *count = new int[casenum]; // 평균을 넘은 학생의 수
    int *student = new int[casenum];
    for(int i=0; i<casenum; i++){
        cin >> student[i];
        for(int j=0; j<student[i]; j++){
            int cmp;
            cin >> cmp;
            v.push_back(cmp);
            s.push_back(v);
            sum += s[i][j];
        }
        avg[i] = sum / student[i];
    }
    //출력
    for(int i=0; i<casenum; i++){
        for(int j=0; j<student[i]; j++){
            if(avg[i] < s[i][j]) count[i]++;
        }
        //cout.precision(4);
        cout << student[i] / count[i];
    }
    
    
    return 0;
}