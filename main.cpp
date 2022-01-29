//
//  main.cpp
//  CUhackit_plannter
//
//  Created by Joseph Suter, Rich Bozard,  Aman Garlapati on 1/29/22.
//
//
//  main.cpp
//  CUhackit_plannter
//
//  Created by Joseph  Suter on 1/29/22.
//
#include <iostream>
#include "Header.h"
#include <fstream>
using namespace std;



//Clock struct
struct CLOCK {
    int hours;
    int minutes;
    int seconds;
};

//Tasks struct
struct TASKS{
    string title;
    int priorty;
    struct CLOCK duration;
};

void timeDifference(struct CLOCK, struct CLOCK, struct CLOCK *);




int main() {
    // Sets Users Name
    string userName;
    cout << "Please enter name: ";
    getline(cin, userName);
    cout << userName << endl;
    
    //Set Wake and Sleep times
    struct CLOCK wakeup, sleep, activeHours;
    
    cout << "What time do you wake up (Hours min seconds): " << endl;
    cin >> wakeup.hours >> wakeup.minutes >> wakeup.seconds;
    
    cout << "What time do you go to sleep (PM): " << endl;
    cin >> sleep.hours >> sleep.minutes >> sleep.seconds;
    
    timeDifference (wakeup, sleep, &activeHours);
    
    //Display activeHours
    cout << activeHours.hours << ":" << activeHours.minutes << ":" << activeHours.seconds;
    cout << endl;
    
    
    //Task Array
    int taskNum = 0;
    TASKS array[taskNum];
    
    
    //Menu
    
    
    
    /*
     //Timer inputs
    int hours, min, sec;
    cout << "Please set a timer for the act:\n";
    cout << "Hours: "; cin >> hours;
    cout << "Minutes: "; cin >> min;
    cout << "Seconds: ";  cin >> sec;
    timer(hours, min, sec);
     
     */
    return 0;
}
void timeDifference(struct CLOCK wakeup, struct CLOCK sleep, struct CLOCK *activeHours){
    sleep.hours += 12;
    if(wakeup.seconds > sleep.seconds){
        --sleep.minutes;
        sleep.seconds += 60;
    }
    activeHours->seconds = sleep.seconds - wakeup.seconds;
    if(wakeup.minutes > sleep.minutes){
        --sleep.hours;
        sleep.minutes += 60;
    }
    activeHours->minutes = sleep.minutes - wakeup.minutes;
    activeHours->hours = sleep.hours - wakeup.hours;
}
