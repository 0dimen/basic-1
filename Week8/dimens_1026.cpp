// 보물 1026번 : https://www.acmicpc.net/problem/1026

#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    int N; // N : 각 배열 숫자의 개수
    
    int result = 0;
    cin >> N;

    int A[N];
    int B[N];
    for(int i = 0; i<N; i++){
        int input;
        cin >> input;
        A[i] = input;
    }
    for(int i = 0; i<N; i++){
        int input;
        cin >> input;
        B[i] = input;
    }

    sort(A, A + N, greater<int>());
    sort(B, B + N);

    for(int i = 0; i<N; i++)
        result += A[i]*B[i];
    
    cout << result;

    return 0;
}
