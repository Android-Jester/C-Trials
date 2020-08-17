#include<iostream>
#include<cmath>

using namespace std;

int main(){
 
 double a, b ,c;
  cout << "Enter values of a, b and c in the formula ax^2+bx+c: ";
  cin >> a >> b >> c;

  double det = pow(b,2)-(4*a*c);
  cout << det <<endl;
  double fore = sqrt(det)/(2*a);
  cout << fore << endl;

  if(det == 0){
    cout << "Equal roots" << endl;
  }  
    
  else if(det < 0){
    cout << "The roots are imaginary" << endl;
  }
  else{
    cout << "The roots are complex" << endl;
  }
  double root1 = ((-b)/2*a + fore);
  double root2 = ((-b)/2*a - fore);
   
  cout << "The root of the quadratic equation is " << root1 << " and "<<root2 <<endl;


  
return 0;
}