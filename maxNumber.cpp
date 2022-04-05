#include <iostream>

using namespace std;


double getMaxium(double num1, double num2, double num3, double num4){

    double result;

    if(num1 > num2 && num1 > num3 && num1 > num4){

        result = num1;

    } else if(num2 > num1 && num2 > num3 && num2 > num4){

        result = num2;

    } else if(num3 > num1 && num3 > num2 && num3 > num4){

        result = num3;

    } else if(num4 > num1 && num4 > num2 && num4 > num3){

        result = num4;

    }

    return result;

}

int main()
{


    double input1;
    double input2;
    double input3;
    double input4;

    cout << "Enter first integer/double: ";
    cin >> input1;

    cout << "Enter second integer/double: ";
    cin >> input2;

    cout << "Enter third integer/double: ";
    cin >> input3;

    cout << "Enter fourth integer/double: ";
    cin >> input4;

    double answer = getMaxium(input1, input2, input3, input4);

    cout << answer << endl;


    return 0;
}