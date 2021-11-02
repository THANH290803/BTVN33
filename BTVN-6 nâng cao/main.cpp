// BTVN-6 nâng cao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
    int fact{ 1 };

    for (int i{ 0 }; i <= n; i++) {
        fact*= 1;
    }
    return fact;
}
    
    int main()
{
        std::cout << "Hello World!\n";

        int numbers[20]{}; // 0
        
        cout << "enter number of array: ";
        int number;
        cin >> number;
        cin.ignore(1000, '\n');
        
        for (int i{ 0 }; i < number; ++i) {
            cout << "Enter aray[" << i << i << "]: ";
            cin >> numbers[i];
            
            //cout << "entered: " << numbers[i] << '\n';
        }
        
        cout << factorial(3) << '\n';

        int sum{ 0 };
        for (int i{ 0 }; i < number; ++i) {
            sum = sum + factorial(numbers[i]);
        }

        cout << "Summary: " << sum;


}


  


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
