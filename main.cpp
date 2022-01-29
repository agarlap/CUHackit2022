//
//  main.cpp
//  CUhackit_plannter
//
//  Created by Joseph  Suter on 1/29/22.
//
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void timer(int hours, int min, int sec);

//Timer function
void timer(int hours, int min, int sec){
    for(;;){ //infinite loop
        if(hours == 0 && min == 0 && sec == 0){
            break;
        }
        if(sec == 0 && min == 0){
            min = 60;
            hours--;
        }jj
        if(sec == 0){
            sec = 60;
            min--;
        }
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << hours << ":" << min << ":" << sec-- << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    // Sets Users Name
    string userName;
    cout << "Please enter name: ";
    getline(cin, userName);
    cout << userName + "\n";
    
    //Tester code
    int hours, min, sec;
    cout << "Please set a timer for the act:\n";
    cout << "Hours: "; cin >> hours;
    cout << "Minutes: "; cin >> min;
    cout << "Seconds: ";  cin >> sec;
    timer(hours, min, sec);
    
    
    
    
    return 0;
}

