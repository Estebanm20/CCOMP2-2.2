#include <iostream>
#include <string>
using namespace std;
class Account {

    public:
        explicit Account(std::string accountName, int initialBalance) 
                : name{accountName} {
            if(initialBalance > 0) {
                balance = initialBalance;
            }
        }

        void deposit(int depositAmount) {
            if(depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }
        void withdrar(int withdrarAmount) {
            if(withdrarAmount <= balance) {
                balance = balance - withdrarAmount;
            }
            else if( withdrarAmount > balance){
                cout<<"\nEl monto excede la cantidad de su cuenta :(";
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(std::string accountName) {
            name = accountName;
        }

        std::string getName() const {
            return name;
        }

    private:
        std::string name;
        int balance{0};
};