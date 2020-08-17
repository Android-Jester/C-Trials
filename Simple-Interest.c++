#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
const int maxSize = 10;
const int minSize = 5;

//Calling function
bool validation(string password);

int main(){
    //Input password
    string passcode;
    cin >> passcode;
    validation(passcode);
  


}


// placing conditions for the password 
bool validation(string password){
    if(password.length() >= minSize && password.length() <=maxSize){
        int size = password.length(); 
  
        int n = password.length(); 
  
        // declaring character array 
        char password[n + 1]; 
  
        // copying the contents of the 
        // string to char array 
        strcpy(password, passcode.c_str()); 
  
        for (int i = 0; i < n; i++) 
            cout << password[i]; 
            return true;
    }
    else{
        return false;
    }
}