#include <iostream>
#include <string>
using namespace std;
class Motorvehicle {
    public:
    explicit Motorvehicle(std::string makeN,std:: string fueltypeN,int yearof,std::string colorN,int engineC):
    make{makeN},fueltype{fueltypeN},color{colorN}{
        if(yearof>0)
            yearofManufact = yearof;
        if(engineC>0)
            engineCapacity = engineC;
    }
    //set
        void setMake(std::string makeN) {
            make = makeN;
        }
        void setfueltype(std::string fueltypeN){
            fueltype = fueltypeN;
        }
        void setyear(int yearof){
            if(yearof>0){
            yearofManufact = yearof;}
            else{
                cout<<"Año invalido"<<endl;}
        }  
        void setcolor(std::string colorN){
            color = colorN;
        }
        void setengine(int engineC){
            if(engineC>0){
                engineCapacity = engineC;}
            else{
                cout<<"Capacidad invalida"<<endl;
            }
        }
    //get
        std::string getMake() const{
            return make;
        }
        std::string getfueltype() const{
            return fueltype;
        }
        int yearof() const{
            return yearofManufact;
        }
        std::string getcolor() const{
            return color;
        }
        int getengine()const{
            return engineCapacity;
        }
        void displayCarDetails (){
            cout<<"Make: "<<make<<endl<<
            "Fueltype: "<<fueltype<<endl<<
            "YearofManufact: "<<yearofManufact<<endl<<
            "Color: "<<color<<endl<<
            "EngineCapacity: "<<engineCapacity<<endl;
        }

    private:
    std::string make;
    std::string fueltype;
    int yearofManufact{1900};
    std::string color;
    int engineCapacity{0};

};