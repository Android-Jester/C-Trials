// Program for counting of number of times a digit appears
#include<iostream>

using namespace std;

int main(){
    int num;
    cout << "Input your number: ";
    cin >> num;

    int chooser;
    cout << "What number would it be: ";
    cin >> chooser;

    int temp = num;
    int count, numCount = 0;
    
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
        if(number[i] == chooser) numCount++;
        cout << number[i] << endl;
    }
    cout << "Number of " << chooser << " = " << numCount << endl;
    return 0;
}