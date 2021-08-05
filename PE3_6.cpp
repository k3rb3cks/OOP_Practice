#include<iostream>
#include<string>
#include<iomanip>

struct Scorecard
{
    std::string name;
    int runs;
    int innings;
    int not_outs;
    float avg;
}card[3];

int main()
{
    for(int i = 0; i < 3; i++)
    {
        std::cout<<"Enter the name of the player: ";
        std::cin>>card[i].name;
        std::cout<<"Enter the runs scored in the series: ";
        std::cin>>card[i].runs;
        std::cout<<"Enter the innings played: ";
        std::cin>>card[i].innings;
        std::cout<<"Enter the number of times the player was not out: ";
        std::cin>>card[i].not_outs;

        card[i].avg = (float)(card[i].runs)/(card[i].innings - card[i].not_outs);

    }

    std::cout<< std::setw(15) << "Player's Name" << " \t\t " << std::setw(15) << "Runs" << " \t\t " << std::setw(15) << "Innings" << " \t\t " << std::setw(15) << "Times not out" << " \t\t " << std::setw(15) << "Average" <<std::endl;

    for(int i = 0; i < 3; i++)
    {
        std::cout<< std::setw(15) << card[i].name<<" \t\t " << std::setw(15) << card[i].runs << " \t\t " << std::setw(15) << card[i].innings << " \t\t " << std::setw(15) << card[i].not_outs << " \t\t " << std::setw(15) << card[i].avg <<std::endl;
    }



}