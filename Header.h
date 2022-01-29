#pragma once

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
        }
        if(sec == 0){
            sec = 60;
            min--;
        }
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << hours << ":" << min << ":" << sec-- << endl;
    }
}

void menu (){
    int taskNum = 0;
    
}
}

