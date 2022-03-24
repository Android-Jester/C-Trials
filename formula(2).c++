#include <iostream>
#include <cmath>
using namespace std;

float a, b, c, added, discriminant, x1, x2;

int isNull(float form, float xa) {
    cout << "(x + \u221A" << form << ")" << endl;
    cout << "(x - \u221A" << form << ")" <<endl;
    return 0;
}

int isNotNull(float form, float xa, float xb) {
        x1 = xa + xb;
        x2 = xa - xb;
        cout << "Xa: "<< xa << endl;
        cout << "Xb: "<< xb << endl;
cout << "(x +"<<x1<<")"<< endl << "(x -"<<x2<<")"<<endl;
        return 1;

}

int main() {

    float a, b, c, added, discriminant, x1, x2;
    cout << "Enter Coefficients of A, B, C, a: ";
    // gets the values A, B, C and a from user
    cin >> a >> b >> c >> added;
    // checks if we get equal roots or unequal roots
    discriminant = b*b - 4*a*c;

        // Already gotten the shortened form of the equation using completion of two square however due to lack of time, I just wrote the short solution
        float part1 = (pow(b, 2)*a*added);
        float part2 = c*4*added;
        float part3 = (4*pow(a, 2)* pow(added, 3));
        float right = ( part1 - part2) / part3;


        float xa = -(b/(2*a));
        float xb = sqrt(right);
        int output = xb == xb ? isNotNull(right, xa, xb) : isNull(right, xa);
        if(output == 1) {
            cout << "It worked";
        } else {
            cout << "It doesn't work" << endl;
        }
        
return 0;
}