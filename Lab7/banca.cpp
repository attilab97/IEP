#include<iostream>
#include <string>
#include <sstream>
//using namespace std;
class Bank{
    private:
        std::string IBAN;
        int suma;
    public: Bank(std::string IBAN, int suma){
                this->IBAN = IBAN;
                this->suma = suma;
                std::cout<<"CONTRUCTOR"<<std::endl;
            }
            void depune(int suma){
                std::cout<<"DEPUNE"<<std::endl;
                this->suma += suma;
            }

             void retrage(int suma){
                if(this->suma >= suma)
                    this->suma -= suma;
            }
            int getSuma(){
                return suma;
            }
            std::string toString(){
                std::stringstream ss;
                ss<<"Iban: "<<this->IBAN<< " suma: "<<this->suma<<std::endl;
                return ss.str();
            }
};
class BankFactory{
    public: static Bank createBank(std::string IBAN){
        return Bank(IBAN, 22);
    }
};
int main(){
    std::auto_ptr<Bank> b1(new Bank("ANYY",11));
    std::cout<<b1->toString();
    std::shared_ptr<Bank> b3(new Bank("OTYY", 3000));
    std::shared_ptr<Bank> b2(b3);
    std::cout<<"b2 = "<<b2->toString();
    b2->depune(1001);
    //std::cout<<"b1 = "<<b1->toString();
    std::cout<<"b3 = "<<b3->toString();
}