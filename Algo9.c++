#include<iostream>

using namespace std;

int main(){

    int num;
    cout << "Input your number: ";
    cin >> num;

    int temp = num;
    int count = 0;
    
    //counting digits
    while(temp != 0){
        temp /= 10;
        count++;
    }
    cout << "Count: " << count <<endl;

    //Extraction of digit value
    int number[count];
    for(int i = 0; i < count; i++){
        number[i] = num - ((num / 10)*10);
        num /= 10;
    }

    //finding the sum of each digits
    int sum = 0;
    for(int i = 0; i < count; i++) sum += number[i];
    cout << "Sum of digits: " << sum << endl;

    return 0;
}