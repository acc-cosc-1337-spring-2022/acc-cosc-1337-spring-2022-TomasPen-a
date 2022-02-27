#include "dna.h"
#include<iostream>
#include<string>
using namespace std;

//confirm choice function
string confirm_choice()
{
	//asks user if they want to exit
    string confirm;
    std::cout<<"Are you sure you want to exit?(y/n): ";
    std::cin>>confirm;

    //validates confirm data
    while (confirm != "y" && confirm != "n")
    {
        std::cout<<"Invalid entry \n";
        std::cout<<"Are you sure you want to exit?(y/n): ";
        std::cin>>confirm;
    }
    return confirm;
}

//run_menu function
void run_menu()
{
    string confirm;
    auto option = 0;
    do
    {
        //displays menu
        std::cout<<"1 Factorial \n";
        std::cout<<"2 Greatest Common Devisor \n";
        std::cout<<"3 Exit \n";

        std::cout<<"Choose an option(1-3): ";
        std::cin>>option;

        //switch takes option and displays, and calls correct function
        switch(option)
        {
            case 1:
                //factorial function
                std::cout<<"Selected Factorial \n";
                std::cout<<"Please enter an integer: ";
                int number_input;
                std::cin>>number_input;
                std::cout<<"The Factorial for the number "<<number_input<<" is "<<factorial(number_input)<<"\n";               
                break;
            case 2:
                //gcd function
                std::cout<<"Selected Greatest Common Divisor\n";
                std::cout<<"Please Enter two integers: ";
                int num1, num2;
                std::cin>>num1>>num2;
                std::cout<<"The greatest common divisor for "<<num1<<" and "<<num2<<" is "<<gcd(num1, num2)<<"\n";                
                break;
            case 3:
                //assigns confirm variable to confirm_choice function
                confirm = confirm_choice();

                //if y is chosen, program is closed
                if(confirm == "y")
                {
                    std::cout<<"Exiting program...";
                }
                //if n is chosen, beginning function is called
                else if(confirm == "n")
                {
                    run_menu();
                }
                break;
            default:
                std::cout<<"Invalid option \n";
        }
    }
    while (option != 3);
}

//main function
int main ()
{
    auto option = 0;
    do
    {
        //displays menu
        std::cout<<"1 Factorial \n";
        std::cout<<"2 Greatest Common Devisor \n";
        std::cout<<"3 Exit \n";

        std::cout<<"Choose an option(1-3): ";
        std::cin>>option;

        //switch takes option and displays, and calls correct function
        switch(option)
        {
            //triggers when option 1 is chosen
            case 1:
                std::cout<<"Selected Factorial \n";
                std::cout<<"Please enter an integer: ";
                int number_input;
                std::cin>>number_input;
                std::cout<<"The Factorial for the number " << number_input << " is " << factorial(number_input) << "\n";
                break;
            //triggers when option 2 is chosen
            case 2:
                std::cout<<"Selected Greatest Common Divisor\n";
                std::cout<<"Please Enter two integers: ";
                int num1, num2;
                std::cin>>num1>>num2;
                std::cout<<"The greatest common divisor for "<< num1 << " and " << num2 << " is " << gcd(num1, num2) << "\n";
                break;
            //triggers when option 3 is chosen
            case 3:
                //asks if user is sure to exit
                std::cout<<"Are you sure you want to exit?(y/n): ";
                char confirm;
                std::cin>>confirm;

                //validates confirm data
                while (confirm != 'y' && confirm != 'n')
                {
                    std::cout<<"Invalid entry \n";
                    std::cout<<"Are you sure you want to exit?(y/n): ";
                    std::cin>>confirm;
                }
                //if y is chosen, program is closed
                if(confirm == 'y')
                {
                    std::cout<<"Exiting program...";
                }
                //if n is chosen, run menu function is called
                else if(confirm == 'n')
                {
                    run_menu();
                }
                break;
            default:
                std::cout<<"Invalid option \n";     
        }
    }while(option != 3);
}