#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void sumOfPowers(){
    //Values
    long double num = pow(2,16);
    long long temp;
    int count = 0;
    
    //Store to temperary variable
    temp = num;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    //Calculating each digit 
    long long numArray[count];
for (int i = count - 1; i >= 0; i--) {
    numArray[i] = num % 10;
    num /= 10; 
    cout << "Number "<< i << " = " << numArray[i] <<endl;
}
}

int main(){
    sumOfPowers();
}






















// int main(){
//     int x;
//     cout <<"Do you want to do?\f1.Download some stuff";
//     cout << "\t2.Code you app";
//     cout << "\t3.Sleep\n";
//     cin >> x;

// switch (x) {
//     case 1:
//         cout << "Internet Party" <<endl;
//         system("google-chrome & xdman");
//         break;
//     case 2:
//         cout << "\aCoding Party" <<endl;
//         system("code & studio.sh");
//         break;
//     case 3:
//         cout << "\aNo Fun" << endl;
//         system("exit");
//         break; 
// }
// return 0;
// }

