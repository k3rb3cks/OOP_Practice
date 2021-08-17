#include<bits/stdc++.h>

class String
{
    private:
        int length;
        char* str;
    
    public:
        
        String()
        {
            length = 0;
            str = new char[length + 1];
        }

        String(const char* str)
        {
            this->length = strlen(str);
            this->str = new char[length + 1];
        }

        String(const String & s)
        {
            this->length = s.length;
            this->str = new char[length];

            strcpy(str, s.str);
        }

        bool operator==(const String & s)
        {
            if(this->length == s.length)
            {
                if(!strcmp(this->str, s.str))
                    return true;
                else
                    return false;
            }

            return false;
        }

        void display()
        {
            printf("%s \n", str);
        }
};


int main()
{
    String s1("HELLO"), s2("HELLO"), s3("HI");

    bool result = s1 == s2;

    std::cout<<result;

    s1.display();
    s2.display();


}