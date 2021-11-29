#include "std_lib_facilities.h"

const vector<string> names {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int get_number()
{
    string name;
    int number = 0;

    if (cin >> number) {
        if (number<0 || size_t(number) >= names.size())
            return (-1);
        else
            return number;
    }
    cin.clear();
    cin >> name;
    for (size_t i = 0; i < names.size(); ++i) {
        if (names[i] == name) 
            return i;
    }
    return (-1);
}

int main()
{
    char operation {' '};
    int x {0};
    int y {0};

    cout << "Mini Calculator \n"
        << "Enter two single digit operands (either as digits or spelled out) separated by an operation (+,-,*,/)\n";

    while (true)
    {
        x = get_number();
        cin >> operation;
        y = get_number();

        if (x==-1 || y==-1)
            cout << "Numbers must be single digit int or string.\n";
        else {
            switch (operation)
            {
            case '+':
                cout << "The sum of " << x << " and " << y << " is " << x+y << ".\n";
                break;
            case '-':
                cout << "The difference of " << x << " and " << y << " is " << x-y << ".\n";
                break;
            case '*':
                cout << "The product of " << x << " and " << y << " is " << x*y << ".\n";
                break;
            case '/':
            if (y == 0)
                cout << "DIVISON BY ZERO ERROR\n";
            else
                cout << "The quotient of " << x << " and " << y << " is " << x/y << ".\n";
                break;
            default:
                cout << "This operation is not valid." ;
                break;
            }
        }
    }
}