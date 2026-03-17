#include <iostream>
using namespace std;

int main() {
    
    int number1, number2, number3;
    cin >> number1;
    cin >> number2;
    cin >> number3;

    if (number1 == number2 && number2 == number3) {
        cout << "all the same" << endl;
    } else if (number1 != number2 && number2 != number3 && number3 != number1){
        cout << "all different" << endl;
    } else {
        cout << "neither" << endl;
    }

    return 0;
}