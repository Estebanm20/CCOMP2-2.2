#include <string>

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
        void withdrawall(int withdrawallAmount){
            if(withdrawallAmount <= balance ){
                balance = balance - withdrawallAmount;
            }
            else if( withdrawallAmount > balance ){
                cout<<"Saldo excede al monto disponible";
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