#include<bits/stdc++.h>

class Inventory
{
    private:
        std::string author, title, publisher;
        float price;
        int stock;

        
    
    public:

        static int successful, unsuccessful;

        Inventory()
        {
            author = "";
            title = "";
            publisher = "";
            price = 0.0;
            stock = 0;
        }

        Inventory(std::string author, std::string title, std::string publisher, float price, int stock)
        {
            this->author = author;
            this->title = title;
            this->publisher = publisher;
            this->price = price;
            this->stock = stock;
        }

        friend bool Search_book(std::string, std::string, Inventory &i);

};

int Inventory::successful;
int Inventory::unsuccessful;

bool Search_book(std::string author, std::string title, Inventory &i)
{
    if(i.author == author && i.title == title)
    {
        std::cout<<"Author: "<<i.author<<std::endl;
        std::cout<<"Title: "<<i.title<<std::endl;
        std::cout<<"Publisher: "<<i.publisher<<std::endl;
        std::cout<<"Price: "<<i.price<<std::endl;
        std::cout<<"Stock: "<<i.stock<<std::endl;

        int copies;
        std::cout<<"\nEnter the number of copies required: ";
        std::cin>>copies;

        if(copies > i.stock)
        {
            std::cout<<"Required copies not in stock!"<<std::endl;
            return false;
        }
        else
        {
            std::cout<<"Total Cost: "<<(i.price * copies)<<std::endl;
            i.stock -= copies;
            return true;
        }

        
    }

    return false;
}

int main()
{
    Inventory books[5];

    Inventory::successful = 0;
    Inventory::unsuccessful = 0;
   

    for(int i = 0; i < 5; i++)
    {   
        std::string author, title, publisher;
        float price;
        int stocks;
        std::cout<<"Enter author: ";
        std::cin>>author;
        std::cout<<"Enter title: ";
        std::cin>>title;
        std::cout<<"Enter publisher: ";
        std::cin>>publisher;
        std::cout<<"Enter price: ";
        std::cin>>price;
        std::cout<<"Enter stocks: ";
        std::cin>>stocks;

        books[i] = Inventory(author, title, publisher, price, stocks);
        std::cout<<std::endl;
        
    }

    char ch = 'y';

    do
    {
        std::string author, title;
        std::cout<<"Enter the author and title of the book required: ";
        std::cin>>author>>title;

        bool found = false;
        for(int i = 0; i < 5; i++)
        {
            found = Search_book(author, title, books[i]);
            if(found)
            {
                Inventory::successful++;
                break;
            }
                
        }

        if(!found)
        {
            std::cout<<"The book is not available!"<<std::endl;
            Inventory::unsuccessful++;
        }
            

        std::cout<<"Do you wish to continue (y/n): "<<std::endl;
        std::cin>>ch;


    } while (ch == 'y');


    std::cout<<"Successfull Transactions: "<<Inventory::successful<<std::endl;
    std::cout<<"Unsuccessfull Transactions: "<<Inventory::unsuccessful<<std::endl;
    

}