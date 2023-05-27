// 캠핑 4796번 : https://www.acmicpc.net/problem/4796

#include <iostream>
using namespace std;

int main(){
    int P, L, V; // P : 연속 기간 주기, L : 연속으로 사용 일수, V : 휴가 일수
    cin >> L >> P >> V;

    int caseNum = 1;
    while(P!=0 & L!=0 & V!=0 ){
        int result = (V/P)*L;

        if(V%P > L)
            result += L;
        
        else
            result += V%P;
        cout << "Case " << caseNum << ": " << result << endl;

        caseNum++;
        cin >> L >> P >> V;
    }

    return 0;
}
