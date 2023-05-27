// 문어  21313 : https://www.acmicpc.net/problem/21313
// 문어가 짝수마리인 경우 : 1 2 1 2 ..
// 문어가 홀수마리인 경우 : 1 2 1 2 .. 3
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 1; i< N; i++){
        if(i%2 != 0)
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
    
    if(N%2 == 1)
        cout << 3 << endl;
    else
        cout << 2 << endl;
    return 0;
}
