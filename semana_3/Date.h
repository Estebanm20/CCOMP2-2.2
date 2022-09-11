#include <iostream>
using namespace std;

class Date {
    public:
    explicit Date(int mounthf,int dayf, int yearf): day{dayf},year{yearf} {
        if(mounthf>=1 && mounthf<= 12){
            mounth = mounthf;
            }
    }
    //set
    void setmounth(int mounthf){
        if (mounthf>=1 && mounthf<= 12){
            mounth = mounthf;
        }
        else
        cout<<"Mes no valido"<<endl;

    }
    void setday(int dayf){
        day = dayf;
    }
    void setyear(int yearf){
        year = yearf;
    }
    //get
    int getmounth()const{
        return mounth;
    }
    int getday()const{
        return day;
    }
    int getyear(){
        return year;
    }

    void display(){
        cout<<"\nMes: "<<mounth
        <<"\nDay: "<<day
        <<"\nYear: "<<year; 
    }
    private:
    int mounth{1};
    int day{0};
    int year{0};

};