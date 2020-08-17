#include<iostream>
using namespace std;
long long factorial(int num){
    long long factor = 1;
    if (num == 0){num = 1;}; 
    for(int i = 1; i <= num; i++){factor = factor * i;};   
    return factor;  
}

int main(){
    int n, r;
    cout << "Input the total value: "; 
    cin >> n;
    cout << "Input the amount to select: ";
    cin >> r;
    if(r <= n){
        long long combo = (factorial(n))/(factorial(n - r) * factorial(r));
        cout <<"factorial of n: "<< factorial(n) <<endl <<"factorial of r: "<< factorial(r)<< endl <<"factorial of n-r: "<< factorial(n-r)<< endl <<"Combination :"<< combo <<endl;
    }
}