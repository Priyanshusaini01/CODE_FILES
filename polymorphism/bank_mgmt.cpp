#include<iostream>
using namespace std;
//
    class bankAccount{
        private:
        string accountholder;
        double balance;

        public: // constructor 
        bankAccount(string name,double amount){
            accountholder=name;
            balance= amount; 
           
        }

        void deposit( int amount){
            balance+= amount;
            cout<<" amt"<<balance<<endl;

        }
        void deposit(double amount){
            balance+= amount;
             cout<<" double amt"<<balance<<endl;
        }
        void deposit(string amount){
            double amountindouble=stod(amount); /// string to double

            balance+= amountindouble;
             cout<<" string amt"<<balance<<endl;
        }


    };

int main(){
//The constructor ensures that when an object is created, it has valid initial values for its data members. 
//his initialization provides a foundation for method overloading to operate correctly, ensuring that methods like deposit() or withdraw() work with an object that has a valid state (e.g., a starting balance).
    bankAccount acc("priyanshu",45000); // obj created 
    acc.deposit(1000);// via int 
    acc.deposit(1345.33);
    acc.deposit("12345");


return 0;
}