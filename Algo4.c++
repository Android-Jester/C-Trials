#include<iostream>
 #include<cmath>
using namespace std;
int main(){
    int n;
    double mean, sum, num[n],Std, dev = 0;
    cout << "Enter number of Values: ";
    cin >> n;
    cout << "Enter values followed by a terminator: ";
    for(int i = 0; i <n; i++){
        cin >> num[i];
        sum = sum + num[i];}
    for(int i = 0; i < n; i++) dev += pow((num[i] - (sum/n)),2); 
    cout << "Standard Deviation: "<<sqrt(dev/n)<<endl;
    return 0;
}