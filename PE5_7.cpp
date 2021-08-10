#include<iostream>
#include<string>
#include<random>

class faculty
{
    private:
        int id;
        std::string name, post, qualification, address;
    
    public:
        void setID(int id)
        {
            this->id = id;
        }

        int getID()
        {
            return this->id;
        }

        void setName(std::string name)
        {
            this->name = name;
        }

        void setPost(std::string post)
        {
            this->post = post;
        }

        void setQualification(std::string qualification)
        {
            this->qualification = qualification;
        }

        void setAddress(std::string address)
        {
            this->address = address;
        }

        std::string getName()
        {
            return this->name;
        }

        std::string getPost()
        {
            return this->post;
        }

        std::string getQualification()
        {
            return this->qualification;
        }

        std::string getAddress()
        {
            return this->address;
        }


        void displayInformation()
        {
            std::cout<<"ID: "<<id<<std::endl;
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Qualification: "<<qualification<<std::endl;
            std::cout<<"Post: "<<post<<std::endl;
            std::cout<<"Address: "<<address<<std::endl;
        }

        void setInformation()
        {
            std::string input;
            std::cout<<"Enter your name: ";
            std::cin>>input;
            setName(input);

            std::cout<<"Enter your Qualification: ";
            std::cin>>input;
            setQualification(input);

            std::cout<<"Enter your Post: ";
            std::cin>>input;
            setPost(input);
            
            std::cout<<"Enter your Address: ";
            std::cin>>input;
            setAddress(input);

            setID(rand());
        }
};


int main()
{
    faculty f1;

    f1.setInformation();
    f1.displayInformation();
}