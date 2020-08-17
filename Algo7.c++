#include<iostream>

using namespace std;



int main(){
    int n;
    cout << "How may numbers: ";
    cin >> n;
    int sumOdd = 0;
    int sumEven = 0;
    
    for(int i = 1; i<=n; i++){
        
        if(i%2==0) sumEven += i;
        else if(i%2==1) sumOdd += i;
    } 
    cout << "The sum of even numbers is equal to: "<<sumEven<<endl;
    cout << "The sum of odd numbers is equal to: "<<sumOdd<<endl;
    return 0;
}