#include<bits/stdc++.h>

class stock
{
    private:
        int stocks;
        double price;

    public:

        stock() {}

        stock(int stocks, double price)
        {
            this->price = price;
            this->stocks = stocks;
        }

};

class electronics : public stock
{
    private:
        std::string appliance;
        int warranty;
        std::string model;
        std::string mfg;

    public:

        electronics() : stock() {}

        electronics(std::string appliance, std::string model, std::string mfg, int warranty, int stocks, double price) : stock(stocks, price)
        {
            this->warranty = warranty;
            this->appliance = appliance;
            this->model = model;
            this->mfg = mfg;
        }

};

class food : public stock
{
    private:
        std::string name;
        std::string expiry_date;
        std::string mfg;

    public:

        food() : stock() {}

        food(std::string name, std::string expiry_date, std::string mfg, int stocks, double price) : stock(stocks, price)
        {
            this->name = name;
            this->expiry_date = expiry_date;
            this->mfg = mfg;
        }

};

class clothing : public stock
{
    private:
        std::string brand;
        std::string type;
    
    public:

        clothing() : stock() {}

        clothing(std::string brand, std::string type, int stocks, double price) : stock(stocks, price)
        {
            this->brand = brand;
            this->type = type;
        }

};

class dairy : public stock
{
    private:
        std::string milk_type;
        std::string mfg;
        std::string expiry_date;
        std::string product;

    public:

        dairy() : stock() {}

        dairy(std::string milk_type, std::string mfg, std::string expiry_date, std::string product, int stocks, double price) : stock(stocks, price)
        {
            this->milk_type = milk_type;
            this->mfg = mfg;
            this->expiry_date = expiry_date;
            this->product = product;
        }

};

class kitchen : public stock
{
    private:
        std::string product;
        std::string use;
        std::string quantity_per_piece;

    public:

        kitchen() : stock() {}

        kitchen(std::string product, std::string use, std::string quantity_per_piece, int stocks, double price) : stock(stocks, price)
        {
            this->product = product;
            this->use = use;
            this->quantity_per_piece = quantity_per_piece;
        }

};