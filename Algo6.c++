#include<iostream>
using namespace std;
int main(){
    int m, n;
    int count = 0;
    cin >> m >> n;
    while(m != 0 && m > 0){
        if(m > n){
            m = m-n;
            cout << m <<endl;
            count++;
        }
        else break;
    }
    cout << "\n\nCount: " <<count;
}