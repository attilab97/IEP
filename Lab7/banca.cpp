#include<iostream>
#include <string>
#include <sstream>
using namespace std;
class BankAccount{
    private:
        std::string IBAN;
        int suma;
    public: BankAccount(std::string IBAN, int suma)
    {
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
    public: static BankAccount *createBankAccount(std::string IBAN, int suma)
    {
        return new BankAccount(IBAN, suma);
    }
};




void f1(std::string IBAN, int suma)
{
	BankAccount *b1 = BankFactory::createBankAccount(IBAN, suma);
	std::cout<<b1->toString();
	delete b1;	
	std::cout<<b1->toString();
}

void f2(std::string IBAN, int suma)
{
	auto_ptr<BankAccount> b2(BankFactory::createBankAccount(IBAN, suma));
	std::cout<<b1->toString();
	auto_ptr<BankAccount> b3(b2);
	std::cout<<b3->toString();
	p3=p4;
	std::cout<<b2->toString();
}

void f3(std::string IBAN, int suma)
{
	shared_ptr<BankAccount> b4(BankFactory::createBankAccount(IBAN, suma));
	std::cout<<b1->toString();
	shared_ptr<BankAccount> b5(b4);
	std::cout<<b4->toString();
	std::cout<<b5->toString();
}

int main(){
    BankAccount b(BankAccount("Aneta", 1000));
    b.toString();
    f1("Oti", 9999);
    f2("Dan", 20);
    f3("Alex", 555);
    return 0;
}