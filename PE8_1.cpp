#include<bits/stdc++.h>

class account
{
    private:
        std::string customer_name, account_number, type_of_account;
    
    public:
        std::string getName()
        {
            return customer_name;
        }

        std::string getAccountNumber()
        {
            return account_number;
        }

        std::string getAccountType()
        {
            return type_of_account;
        }

        void setName(std::string customer_name)
        {
            this->customer_name = customer_name;
        }

        void setAccountNumber(std::string account_number)
        {
            this->account_number = account_number;
        }

        void setAccountType(std::string type_of_account)
        {
            this->type_of_account = type_of_account;
        }
};

class current_account : public account
{
    private:
        double balance = 0.0;
        const double min_balance = 3000.00;
        const double service_charge = 2;

    public:

        void setBalance(double balance)
        {
            this->balance = balance;
        }

        void checkBalance()
        {
            if(balance < min_balance)
            {
                std::cout<<"Your balance is lower than minimum balance allowed! "<<std::endl;
                std::cout<<"Your balance will be imposed with a service charge of "<<service_charge<<"%"<<" i.e Rs. "<<(balance * service_charge / 100)<<std::endl;
                balance -= (balance * service_charge / 100);
                std::cout<<"New balance = Rs. "<<balance<<std::endl;
            }
        }

        void display_balance()
        {
            std::cout<<"Your current balance = Rs. "<<balance<<std::endl;
        }

};

class savings_account: public account
{
    private:
        double balance;
        const double interest = 6.5;
        int tenure;
    
    public:
        
        double getBalance()
        {
            return balance;
        }

        double getTenure()
        {
            return tenure;
        }

        void setBalance(double balance)
        {
            this->balance = balance;
        }

        void setTenure(int tenure)
        {
            this->tenure = tenure;
        }

        void withraw_money(double amount)
        {
            if(amount > balance)
            {
                std::cout<<"Insufficient Funds!!!"<<std::endl;
                return;
            }

            balance -= amount;
            std::cout<<"Money withdrawal successfull!!"<<std::endl;
        }

        void deposit_money(double amount)
        {
            balance += amount;

            std::cout<<"Money successfully deposited!!!"<<std::endl;
        }

        void compute_interest()
        {   
            double amount;
            amount = balance * pow((1 + (interest / 100)), tenure);
            balance = amount;
            std::cout<<"Interest computed and balance updated!!!"<<std::endl;
            std::cout<<"Balance after interest = Rs. "<<balance<<std::endl;
        }

        void display_balance()
        {
            std::cout<<"Balance: Rs. "<<balance<<std::endl;
        }


};

int main()
{
    std::string name, number, type;
    double amount, balance;
    int tenure;

    current_account ca;
    savings_account sa;

    int choice;

    char ch = 'y';

    std::cout<<"Enter your choice: \n1. Current Account \n2. Savings Account"<<std::endl;
    std::cin>>choice;

    switch (choice)
    {
    case 1:
        std::cout<<"Enter name: ";
        std::cin>>name;
        ca.setName(name);
        std::cout<<"Enter account Number: ";
        std::cin>>number;
        ca.setAccountNumber(number);
        ca.setAccountType("Current");
        std::cout<<"Enter previous balance: ";
        std::cin>>balance;
        ca.setBalance(balance);


        
        do
        {
            std::cout<<"Enter your choice of operation: \n1. Check Balance \n2. Display Balance \n";
            std::cin>>choice;

            switch (choice)
            {
            case 1:
                ca.checkBalance();
                break;

            case 2:
                ca.display_balance();
                break;

            default:
                std::cout<<"Invalid Choice!!! Try Again!!!"<<std::endl;
                break;
            }

        std::cout<<"Do you wish to continue? (y/n) ? ";
        std::cin>>ch;

        } while (ch == 'y');

        break;

    case 2:
        std::cout<<"Enter Name: ";
        std::cin>>name;
        std::cout<<"Enter account number: ";
        std::cin>>number;
        std::cout<<"Enter previous balance: ";
        std::cin>>balance;
        std::cout<<"Enter the tenure for which account has been active: ";
        std::cin>>tenure;

        sa.setName(name);
        sa.setAccountNumber(number);
        sa.setAccountType("Savings");
        sa.setBalance(balance);
        sa.setTenure(tenure);

        do
        {
            std::cout<<"Enter your choice of operation: \n1. Deposit Money \n2. Withdraw Money \n3. Display Balance \n4. Compute Interest and Update Balance \n";
            std::cin>>choice;

            switch (choice)
            {
            case 1:
                std::cout<<"Enter amount to deposit: ";
                std::cin>>amount;

                sa.deposit_money(amount);
                break;

            case 2:
                std::cout<<"Enter amount to withdraw: ";
                std::cin>>amount;

                sa.withraw_money(amount);
                break;

            case 3:
                sa.display_balance();
                break;

            case 4:
                sa.compute_interest();
                break;
            
            default:
                std::cout<<"Invalid Choice!!! Try Again!!!"<<std::endl;
                break;
            }

        std::cout<<"Do you wish to continue? (y/n) ? ";
        std::cin>>ch;

        } while (ch == 'y');
        
        break;

    
    default:
        std::cout<<"Invalid choice!!!"<<std::endl;
        break;
    }


}

