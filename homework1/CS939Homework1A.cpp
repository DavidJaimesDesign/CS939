//This program calculates candy bar sales
#include <iostream>
using namespace std;

int main() {
    double numberOfSales, priceOfSingleBar, revenue;

    //Get the number of candy bars sold
    cout << "Please enter the number of candy bars sold : ";
    cin >> numberOfSales;

    //Get the price of a single candy bar
    cout << "what is the amount the organization earns for each candy bar sold? :";
    cin >> priceOfSingleBar;

    //Calculate the pay
    revenue = numberOfSales * priceOfSingleBar;

    //Display the pay
    cout << "The total amount earned " << revenue << endl;
    return 0;
}
