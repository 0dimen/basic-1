// 동전 0 11047번 : https://www.acmicpc.net/problem/11047

#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    
    int A[N];
    int maxIndex;
    int coinNum = 0;

    for(int i = 0; i<N; i++){
        int a; // 동전의 가치
        cin >> a;

        A[i] = a;
        if(a <= K) // 사용할 수 있는 최대 동전 가치
            maxIndex = i;
    }

    for(int i = maxIndex; i >= 0; i--){ // 동전 개수 세기. 사용 가능한 최대 단위 동전부터 최대한 사용.
        while(K >= A[i]){
            K -= A[i];
            coinNum++;
        }
    }
    cout << coinNum;
    return 0;
}
