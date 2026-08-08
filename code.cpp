#include <iostream>
using namespace std;

int calculatePower(int base, int exponent) {
    int result = 1;

    for(int i = 0; i < exponent; i++) {
        result = result * base;
    }

    return result;
}

int main() {
    int base, exponent;
     cout<<"enter the base"<<endl;
    cin >> base ;
    cout<<"enter the exponent"<<endl;
	cin>> exponent;

    int answer = calculatePower(base, exponent);

    cout << base << " raised to the power " 
         << exponent << " is: " << answer;

    return 0;
}
