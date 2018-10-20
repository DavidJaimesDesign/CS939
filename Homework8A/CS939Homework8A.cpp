#include <iostream>
#include <fstream>
#include <iomanip>
#include <array>
#include <string>
#include <sstream>

using namespace std;
class PayRoll{
private:
    double hourlyRate;
    double hoursWorked;

public:
    PayRoll(){
        hourlyRate = 0;
        hoursWorked = 0;
    }

    double getIncome(){
        return hourlyRate*hoursWorked;
    }

    void setValues(double hours, double rate){
        hourlyRate = rate;
        hoursWorked = hours;
    }
};

int main() {
    PayRoll employee;
    PayRoll employees[6] = { employee };
    ifstream infile;
    infile.open("payroll.dat");

    int count = 0;
    double hours;
    double rate;
    while (infile >> hours >> rate){
        if(count<7){
            employees[count].setValues(hours, rate);
        }
        count++;
    }
    infile.close();

    cout << fixed;
    cout << setprecision(2);

    for(int i=0; i < 6; i++){
        cout << "Employee "<<i+1<< " : "<< employees[i].getIncome()<<endl;
    }

}

