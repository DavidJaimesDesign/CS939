//This program intakes 3 runners and their time and returns them in order
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    bool invalid = false;
    pair <string, int> firstRunner;
    pair <string, int> secondRunner;
    pair <string, int> thirdRunner;

    cout << "Enter Runners Name: ";
    cin >> firstRunner.first;

    cout << "Enter Runner's Time: ";
    cin >> firstRunner.second;
    if(firstRunner.second < 0){invalid = true;}

    cout << "Enter next Runners Name: ";
    cin >> secondRunner.first;
    cout << "Enter next Runner's Time: ";
    cin >> secondRunner.second;
    if(secondRunner.second < 0){invalid = true;}

    cout << "Enter next Runners Name: ";
    cin >> thirdRunner.first;

    cout << "Enter next Runner's Time: ";
    cin >> thirdRunner.second;
    if(thirdRunner.second < 0){invalid = true;}

    if(invalid == true){
        cout << "Please only enter postive numbers for the runner's time" << endl;
        cout << "Please restart the program" << endl;
        return(0);
    }


    if(firstRunner.second > secondRunner.second && firstRunner.second > thirdRunner.second) {
        if(secondRunner.second > thirdRunner.second){
            cout << "First Place: " << firstRunner.first << " " << firstRunner.second << endl;
            cout << "Second Place: " << secondRunner.first << " " << secondRunner.second<< endl;
            cout << "Third Place: "<< thirdRunner.first <<  " " << thirdRunner.second << endl;
        }else{

            cout << "First Place: "<< firstRunner.first <<  " " << firstRunner.second << endl;
            cout << "Second Place: "<< thirdRunner.first <<  " " << thirdRunner.second << endl;
            cout << "Third Place: "<< secondRunner.first <<  " " << secondRunner.second << endl;
        }
    } else if(secondRunner.second > firstRunner.second && secondRunner.second > thirdRunner.second){
        if(firstRunner.second > thirdRunner.second){
            cout << "First Place: "<< secondRunner.first <<  " " << secondRunner.second << endl;
            cout << "Second Place: "<< firstRunner.first <<  " " << firstRunner.second << endl;
            cout << "Third Place: "<< thirdRunner.first <<  " " << thirdRunner.second << endl;

        }else{
            cout << "First Place: "<< secondRunner.first <<  " " << secondRunner.second << endl;
            cout << "Second Place: "<< thirdRunner.first <<  " " << thirdRunner.second << endl;
            cout << "Third Place: "<< firstRunner.first <<  " " << firstRunner.second << endl;
        }

    }else if(thirdRunner.second > firstRunner.second && thirdRunner.second > secondRunner.second){
        if(firstRunner.second > secondRunner.second){
            cout << "First Place: "<< thirdRunner.first <<  " " << thirdRunner.second << endl;
            cout << "Second Place: "<< firstRunner.first <<  " " << firstRunner.second << endl;
            cout << "Third Place: "<< secondRunner.first <<  " " << secondRunner.second << endl;
        }else{
            cout << "First Place: "<< thirdRunner.first <<  " " << thirdRunner.second << endl;
            cout << "Second Place: "<< secondRunner.first <<  " " << secondRunner.second << endl;
            cout << "Third Place: "<< firstRunner.first <<  " " << firstRunner.second << endl;
        }
    }
    return 0;
}