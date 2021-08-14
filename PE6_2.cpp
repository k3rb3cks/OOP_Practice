#include<bits/stdc++.h>

class String
{
    private:
        char* str;
        int length;

    public:

        String()
        {
            length = 0;
            str = new char[length + 1];
        }

        String(const char* s)
        {
           this->length = strlen(s);
           str = new char[length + 1];
        }

        String(String &s2)
        {
            this->str = new char[strlen(s2.str) + 1];
            strcpy(str, s2.str);
        }

        String concat(String &s2)
        {
            String s;
            strcpy(s.str, this->str);
            delete str;
            this->length = this->length + s2.length;
            str = new char[length + 1];
            strcat(str, s.str);
            strcat(str, s2.str);
            return s;
        }

        void display()
        {
            std::cout<<str<<std::endl;
        }

        ~String()
        {
            delete str;
        }
};

int main()
{
    String s1;
    s1.display();
    String s2("Well Done");
    s2.display();
    /*String s3(" Next String");
    s3.display();
    String s4;
    s4 = s2.concat(s3);
    s4.display();*/
}