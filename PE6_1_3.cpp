#include<iostream>
#include<string>

class account
{
    private:
        std::string name, type, account_number;
        float balance;
    
    public:

        std::string getName()
        {
            return name;
        }

        account()
        {
            name = "";
            type = "Savings";
            account_number = "";
            balance = 0.0;
        }

        account(std::string name, std::string type, std::string account_number, float balance)
        {
            this->name = name;
            this->type = type;
            this->account_number = account_number;
            this->balance = balance;
        }

        void withdraw_money(float amount)
        {
            if(amount > balance)
            {
                std::cout<<"Insufficient Funds!!!"<<std::endl;
                return;
            }

            balance -= amount;
            std::cout<<"Money withdrawal successfull!!!"<<std::endl;


        }

        void deposit_money(float amount)
        {
            balance += amount;

            std::cout<<"Money deposited successfully"<<std::endl;
        }

        void display()
        {
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Balance: "<<balance<<std::endl;
        }

        //friend int getAccount(std::string name);
};


int main()
{
    std::string name, type, account_number;
    float balance, amount;

    char ch = 'y';
    int choice;
   
    account acc[10];

    for(int i = 0; i < 10; i++)
    {
        std::cout<<"Enter you name: ";
        std::cin>>name;
        std::cout<<"Enter your account type: ";
        std::cin>>name;
        std::cout<<"Enter your account number: ";
        std::cin>>account_number;
        std::cout<<"Enter previous balance: ";
        std::cin>>balance;
        acc[i] = account(name, type, account_number, balance);
    }

    int customer_id = -1;

    std::cout<<"Enter your name: ";
    std::cin>>name;

    for(int i = 0; i < 10; i++)
    {
        if(acc[i].getName() == name)
        {
            customer_id = i;
            break;
        }

        else
        {
            std::cout<<"User Not found!!!"<<std::endl;
        }
    }
    
    do
    {   

        std::cout<<"Enter your choice of operation: \n1. Deposit Money \n2. Withdraw Money \n3. Display Name and Balance \n";
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
            acc[customer_id].display();
            break;
        
        default:
            std::cout<<"Invalid Input!!!";
            break;
        }

        std::cout<<"Do you want to continue (y/n): ";
        std::cin>>ch;
    }
    while(ch == 'y');
}