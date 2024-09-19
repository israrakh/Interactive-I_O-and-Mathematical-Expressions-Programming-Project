// Interactive I_O and Mathematical Expressions Programming Project.cpp : This project covers two programming examples, Ingredient Adjuster and Interest Earned.


// Interest Earned Program.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    // Declaring and initailizing the variables.
    double principal, rate, interest, amount;
    int t; 

    // prompting the user for the inputs 
    cout << "Enter the interest rate (e.g., 4.25, for 4.25%): ";
    cin >> rate;
    rate /= 100; // converting percentage to decimal.
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> t;
    cout << "Enter the principal amount: ";
    cin >> principal;

    // Calculating the amount in savings after one year.
    amount = principal * pow(1 + (rate / t), t);

    // Calculating the interest earned
    interest = amount - principal;

    // Displaying the result.
    // Setting precision to 2 decimal places
    cout << fixed << setprecision(2) << endl;
    cout << "Interest Rate:       " << setw(6) << (rate * 100) << "%" << endl;
    cout << "Times Compounded:    " << setw(6) << t << endl;
    cout << "Principal:         $" << setw(6) << principal << endl;
    cout << "Interest:           $" << setw(6) << interest << endl;
    cout << "Amount in Savings: $" << setw(6) << amount << endl;
    return 0;
}

