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

int getCustomerID(std::string name, account acc[])
{
    for(int i = 0; i < 10; i++)
    {
        if(acc[i].getName() == name)
        {
            return i;
        }
        
    }
    return -1;
}



int main()
{
    account acc[10];


    std::string name, type;
    double balance, amount;
    long int acc_num;


    for(int i = 0; i < 10; i++)
    {
        std::cout<<"Enter your name: ";
        std::cin>>name;

        acc[i].setName(name);

        std::cout<<"Enter your account number: ";
        std::cin>>acc_num;

        acc[i].setAcc_No(acc_num);

        std::cout<<"Enter the type of your account: ";
        std::cin>>type;

        acc[i].setType(type);

        std::cout<<"Enter your previous balance: ";
        std::cin>>balance;

        acc[i].setBalance(balance);
    }

    int choice;

    char ch = 'y';

    std::string customer_name;

    std::cout<<"Enter your name: ";
    std::cin>>customer_name;

    int customer_id = getCustomerID(customer_name, acc);

    if(customer_id == -1)
        std::cout<<"No user Found!!!"<<std::endl;

    do
    {
    std::cout<<"Enter your choice of operation: \n1. Deposit Money \n2. Withdraw Money \n3. Display Name and Balance \n4. Change User\n";
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        std::cout<<"Enter amount to deposit: ";
        std::cin>>amount;

        acc[customer_id].deposit_money(amount);

        break;

    case 2:
        std::cout<<"Enter amount to withdraw: ";
        std::cin>>amount;

        acc[customer_id].withdraw_money(amount);

        break;
    
    case 3:
        std::cout<<"Name: "<<acc[customer_id].getName()<<std::endl;
        std::cout<<"Balance: "<<acc[customer_id].getBalance()<<std::endl;
        break;
    
    case 4:
        std::cout<<"Enter your name: ";
        std::cin>>customer_name;

        customer_id = getCustomerID(customer_name, acc);

        if(customer_id == -1)
            break;
        break;
    
    default:
        std::cout<<"Invalid Input!!!";
        break;
    }

    std::cout<<"Do you want to continue (y/n): ";
    std::cin>>ch;
    }while(ch == 'y');

}

