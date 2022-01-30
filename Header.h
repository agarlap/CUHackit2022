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


struct CLOCK {
    int hours;
    int minutes;
    int seconds;
    string AMPM1;
    string AMPM2;

};

void timeDifference(struct CLOCK, struct CLOCK, struct CLOCK *);

void timeDifference(struct CLOCK wakeup, struct CLOCK sleep, struct CLOCK *activeHours){
    
    if(wakeup.AMPM1 != sleep.AMPM2){
        sleep.hours += 12;
    }
    
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

//Tasks struct
struct TASKS{
    string name;
    string priorty;
    string duration;
    string currentDay;
    string dueDay;
};
void menu(struct TASKS, struct TASKS, struct TASKS, struct TASKS, struct TASKS *);


 int printMenu(int userPick){
    cout << "MENU" << endl;
    cout << "1. Create Task" << endl;
    cout << "2. See Tasks" << endl;
    cout << "3. Print Planner" << endl;
    cout << "4. Quit" << endl;
    cin >> userPick;
    return userPick;
}
