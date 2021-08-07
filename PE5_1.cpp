#include<iostream>
#include<string>

class account
{
    private:
        std::string name;
        long int account_number;
        std::string acc_type;
        double balance = 0.0;

    public:
        std::string getName()
        {
            return name;
        }

        void setName(std::string name)
        {
            this->name = name;
        }

        long int getAcc_No()
        {
            return account_number;
        }

        void setAcc_No(long int acc_no)
        {
            account_number = acc_no;
        }

        std::string getType()
        {
            return acc_type;
        }

        void setType(std::string type)
        {
            acc_type = type;
        }

        double getBalance()
        {
            return balance;
        }

        void setBalance(double balance)
        {
            this->balance = balance;
        }

        void withdraw_money(double amount)
        {
            if(amount > balance)
            {
                std::cout<<"Insufficient Funds!!!"<<std::endl;
                return;
            }

            balance -= amount;
            std::cout<<"Money successfully withdrawn"<<std::endl;

        }

        void deposit_money(double amount)
        {
            balance += amount;

            std::cout<<"Money successfully deposited";
        }

};

int main()
{
    account acc_1;

    std::string name, type;
    double balance, amount;
    long int acc_num;


    std::cout<<"Enter your name: ";
    std::cin>>name;

    acc_1.setName(name);

    std::cout<<"Enter your account number: ";
    std::cin>>acc_num;

    acc_1.setAcc_No(acc_num);

    std::cout<<"Enter the type of your account: ";
    std::cin>>type;

    acc_1.setType(type);

    std::cout<<"Enter your previous balance: ";
    std::cin>>balance;

    acc_1.setBalance(balance);

    int choice;

    char ch = 'y';

    do
    {
        std::cout<<"Enter your choice of operation: \n1. Deposit Money \n2. Withdraw Money \n3. Display Name and Balance \n";
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        std::cout<<"Enter amount to deposit: ";
        std::cin>>amount;

        acc_1.deposit_money(amount);

        break;

    case 2:
        std::cout<<"Enter amount to withdraw: ";
        std::cin>>amount;

        acc_1.withdraw_money(amount);

        break;
    
    case 3:
        std::cout<<"Name: "<<acc_1.getName()<<std::endl;
        std::cout<<"Balance: "<<acc_1.getBalance()<<std::endl;
    
    default:
        std::cout<<"Invalid Input!!!";
        break;
    }

    std::cout<<"Do you want to continue (y/n): ";
    std::cin>>ch;
    }while(ch == 'y');

}

