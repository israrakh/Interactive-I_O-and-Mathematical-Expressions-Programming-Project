// Interactive I_O and Mathematical Expressions Programming Project.cpp : This project covers two programming examples, Ingredient Adjuster and Interest Earned.


// Ingredient Adjuster Program.

#include <iostream>
#include <iomanip>
using namespace std;

// Declaring and initializing constant variables.
const double SUGAR_PER_48_COOKIES = 1.5; // cups of sugar
const double BUTTER_PER_48_COOKIES = 1.0; // cups of butter
const double FLOUR_PER_48_COKKIES = 2.75; // cups of flour
const int COOKIES_PER_RECIPE = 48;

int main()
{
    // Asking the user to enter the number of desired cookies.
    int desired_cookies;
    cout << "How many cookies do you want to make? ";
    cin >> desired_cookies;

    // Calculating the required amount of each ingredient.
    double sugar_required = (SUGAR_PER_48_COOKIES / COOKIES_PER_RECIPE) * desired_cookies;
    double butter_required = (BUTTER_PER_48_COOKIES / COOKIES_PER_RECIPE) * desired_cookies;
    double flour_required = (FLOUR_PER_48_COKKIES / COOKIES_PER_RECIPE) * desired_cookies;

    // Displaying the results.
    // Setting up the precision to 2 decimal places 
    cout << fixed << setprecision(2); 
    cout << "In order to make " << desired_cookies << " cookies, you might need: " << endl;
    cout << sugar_required << " cups of sugar." << endl;
    cout << butter_required << " cups of butter." << endl;
    cout << flour_required << " cups of flour." << endl;

    return 0;
}

