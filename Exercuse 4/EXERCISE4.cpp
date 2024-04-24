#include <iostream>

using namespace std;

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    char choice;
    int num1, num2;
    int result;
    do {
        cout << "\nMENU\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "Enter your choice (1-4): ";
        int operation;
        cin >> operation;
        cout << "Enter integer number 1: ";
        cin >> num1;
        cout << "Enter integer number 2: ";
        cin >> num2;

        switch(operation) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                if(num2 != 0)
                    result = divide(num1, num2);
                else
                    cout << "The second integer is zero, divide by zero" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        if (operation != 4 || (operation == 4 && num2 != 0))
            cout << "Result: " << result << endl;

        cout << "Press y or Y to continue: ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return static_cast<float>(a) / b;
}
