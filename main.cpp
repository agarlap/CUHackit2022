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

int main() {
    
    // Sets Users Name
    string userName;
    cout << "Please enter name: ";
    getline(cin, userName);
    cout << userName << endl;
    
    //Set Week up
    struct CLOCK wakeup, sleep, activeHours;
    
    cout << "What time do you start your day (Hours min seconds): " << endl;
    cin >> wakeup.hours >> wakeup.minutes >> wakeup.seconds;
    
    cout << "AM or PM?: ";
    cin >> wakeup.AMPM1;
    
    
    cout << "What time do you end your day: " << endl;
    cin >> sleep.hours >> sleep.minutes >> sleep.seconds;
    
    cout << "AM or PM: ";
    cin >> sleep.AMPM2;
    
    timeDifference (wakeup, sleep, &activeHours);
    
    //Display activeHours
    cout << "Daily hours " << activeHours.hours << ":" << activeHours.minutes << ":" << activeHours.seconds;
    cout << endl;
    
    double  workSeconds = (activeHours.hours * 3600) + (activeHours.minutes * 60) + (activeHours.seconds);
    double workWeekHours = (workSeconds * 5)/3600;
    cout << "Weekly Hours " << workWeekHours;
    cout << endl;
    
    //Task Array
//    int taskNum = 0;
    int currenttasknum = 0;
    int maxtasknum = 25;
    //string TaskArray[taskNum];
    struct TASKS TaskArray[maxtasknum];
    
    int x = 0;
    while(x != 1){
        int choice = 0;
        choice = printMenu(choice);
        if(choice == 1){
                struct TASKS taskname, urgency, workTime,  today,  dueday;
 //               taskNum += 1;
                cout << "enter the name of the task:";
                cout << endl;
            cin >> taskname.name;
                cout << "enter urgency of task" << endl;
                cin >> urgency.priorty;
                cout << "enter time estimated duration of task: ";
                cin >> workTime.duration;
                cout << "enter the current day: " << endl;
                cin >> today.currentDay;
                cout << "enter the day task must be done:" << endl;
                cin >> dueday.dueDay;
                
                //TaskArray[taskNum] = {taskname.name,urgency.priorty,workTime.duration, today.currentDay, dueday.dueDay};
                TaskArray[currenttasknum].name = taskname.name;
                TaskArray[currenttasknum].priorty = taskname.priorty;
                TaskArray[currenttasknum].duration = taskname.duration;
                TaskArray[currenttasknum].currentDay = taskname.currentDay;
                TaskArray[currenttasknum].dueDay = taskname.dueDay;
                
                currenttasknum += 1;
            }
            else if (choice == 2){
                for(int i = 0; i < currenttasknum; i ++){
                    cout << TaskArray[i].priorty;
                }
            }
        
        
        
    } //Ends while loop
    
    return 0;
}
