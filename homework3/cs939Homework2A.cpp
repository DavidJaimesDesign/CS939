//This program calculates movie ticket sales
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double numberOfAdultSales, numberOfChildSales, grossRevenue, netRevenue, expenses;
    string movieTitle;
    double priceOfAdult = 6.00;
    double priceOfChild = 3.00;

    cout << "Please enter the name of the movie: ";
    cin >> movieTitle;

    cout << "How many ADULT tickets sold: ";
    cin >> numberOfAdultSales;

    cout << "How many CHILD tickets sold: ";
    cin >> numberOfChildSales;

    grossRevenue = (numberOfAdultSales * priceOfAdult) + (numberOfChildSales * priceOfChild);
    expenses = grossRevenue * 0.80;
    netRevenue = grossRevenue * 0.20;

    cout << "Movie Name: " << movieTitle << endl;
    cout << "Adult Tickets Sold:  " << numberOfAdultSales << endl;
    cout << "Child Tickets Sold:  " << numberOfChildSales << endl;
    cout << std::fixed;
    cout << std::setprecision(2);
    cout << "Gross Box Ofﬁce Proﬁt     :$" << grossRevenue << endl;
    cout << "Amount Paid to Distributor:$" << expenses << endl;
    cout << "Net Box Ofﬁce Proﬁt       :$" << netRevenue;

    return 0;
}

