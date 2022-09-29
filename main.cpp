#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool check_number(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}

int getNumber(string eq)
{
    string num;

    cout << "Enter " << eq << ": ";
    cin >> num;

    while (!check_number(num))
    {
        cout << "Invalid input. Try again." << endl;
        cout << "Enter " << eq << ": ";
        cin >> num;
    }

    int value = stoi(num);

    return value;
}

void calculate(int a, int b, int c)
{
    double D = (b * b) - (4 * a * c);

    double x1, x2;

    cout << endl;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        cout << "Result:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);

        cout << "Both roots are equal to " << x1;
    }
    else
    {
        cout << "This equation has no roots :(";
    }
}

void quadraticEquation()
{
    cout << "Calculate quadratic equation!" << endl
         << "aX^2 + bX + c = 0" << endl;

    int a, b, c;

    a = getNumber("a");
    b = getNumber("b");
    c = getNumber("c");

    calculate(a, b, c);
}

int main()
{
    char again = 'y';

    while (tolower(again) == 'y')
    {
        quadraticEquation();

        cout << endl
             << endl
             << "Calculate more?" << endl
             << "y [yes]" << endl
             << "x [no]" << endl;

        cin >> again;
    }

    return 0;
}