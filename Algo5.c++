#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    for(int i = 0; i < n; i+=2){
        cout<<""<<setw(i)<<setfill('*')<<endl;
    }
    return 0;
}