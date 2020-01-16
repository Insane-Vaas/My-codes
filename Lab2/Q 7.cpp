#include<iostream>
using namespace std;

struct time{
    
    int hour,minutes,seconds;

};

void input(time &clock){

    cout<<"Enter here :- ";
    cout<<"hours:- ";
    cin>>clock.hour;
    cout<<"minutes:- ";
    cin>>clock.minutes;
    cout<<"seconds:- ";
    cin>>clock.seconds;
    cout<<endl;
    
}

void show(time clock){
    if(clock.hour<10){

        cout<<"0"<<clock.hour<<":"<<clock.minutes<<":"<<clock.seconds;

    }
    else
    {
        cout<<clock.hour<<":"<<clock.minutes<<":"<<clock.seconds;
    }
}

int main(){

    struct time clock;

    input(clock);
    show(clock);
    
}