#include<iostream>

int main()
{
    int count[6] = {0, 0, 0, 0, 0 ,0}, vote;

    char yes_no = 'y';

   do
   {
       std::cout << "Enter the vote: ";
        std::cin>>vote;

        switch (vote)
        {
        case 1:
            count[0]++;
            break;
        case 2:
            count[1]++;
            break;
        case 3:
            count[2]++;
            break;
        case 4:
            count[3]++;
            break;
        case 5:
            count[4]++;
            break;
        
        default:
            count[5]++;
            break;
        }

        std::cout<<"Do you want to continue? (y/n) ";
        std::cin>>yes_no;
   }
   while(yes_no == 'y');

   for(int i = 0; i < 5; i++)
   {
       std::cout<<"The votes for candidate "<< i + 1 << " = " << count[i]<<std::endl; 
   }

   std::cout<<"The spoilt ballots = " << count[5];

    

}