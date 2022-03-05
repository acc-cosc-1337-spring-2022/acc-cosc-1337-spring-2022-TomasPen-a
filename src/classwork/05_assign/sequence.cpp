#include "sequence.h"
#include <iostream>
using namespace std;

//get gc content function
double get_gc_content(const string & dna)
{
    //declare variables
    double content = 0.0;
    int len = 0;
    int i = 0;

    //counts G and C in DNA string
    while(dna[i] != '\0')
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            content += 1;
        }

        i += 1;
        len += 1;
    }
    //returns GC and divides by length of string
    return content/len;
}

//reverse string function
std::string reverse_string(std::string dna)
{
    std::string rev_dna = "";
    //loops DNA string in reverse order and declares it to rev_dna
    for(int i = dna.length() - 1; i >= 0; i--)
    {
        rev_dna += dna[i];
    }
    return rev_dna;
}

//get dna complement function
std::string get_dna_complement(std::string dna)
{
    //creates reversed string
    std::string dna_comp = reverse_string(dna);
    std::string complement ="";

    //loops through reversed string and places content in complement string
    for (int i = 0; i < dna.length(); i += 1)
    {
        if(dna_comp[i] == 'A')
        {
            complement += 'T';
        }
        else if(dna_comp[i] == 'T')
        {
            complement += 'A';
        }
        else if(dna_comp[i] == 'C')
        {
            complement += 'G';
        }
        else if(dna_comp[i] == 'G')
        {
            complement += 'C';
        }
    }
    return complement;
}

//display menu function
void display_menu()
{
        std::cout<<"1 GC content \n";
        std::cout<<"2 DNA complement \n";
        std::cout<<"3 Exit \n";
}

//run menu function
void run_menu()
{
    auto option = 0;

    do
	{
		//displays menu
        display_menu();

        std::cout<<"Choose an option(1-3): ";
        std::cin>>option;

        //sends option to handle menu option
        handle_menu_option(option);

	} while (option != 3);
}

//displays and checks GC content
std::string content_string_check()
{
    std::string content_check;
    std::cout<<"Selected GC content \n";
    std::cout<<"Enter a DNA string: ";
    std::cin>>content_check;

    //loops through GC content checking for invalid inputs
    for (int i = 0; i < content_check.length(); i++)
    {
        if(content_check[i] != 'A' && content_check[i] != 'C' && content_check[i] != 'T' && content_check[i] != 'G')
        {
            std::cout<<"Please enter a DNA string with only A, C, T, and G. \n";
            std::cout<<"Enter a DNA string: ";
            std::cin>>content_check;
        }
    }
    return content_check;
}

//displays and checks DNA complement
std::string comp_string_check()
{
    std::string comp_check;
    std::cout<<"Selected DNA complement \n";
    std::cout<<"Enter a DNA string: ";
    std::cin>>comp_check;

    //loops through DNA complement checking for invalid inputs
    for (int i = 0; i < comp_check.length(); i++)
    {
        if(comp_check[i] != 'A' && comp_check[i] != 'C' && comp_check[i] != 'T' && comp_check[i] != 'G')
        {
            std::cout<<"Please enter a DNA string with only A, C, T, and G. \n";
            std::cout<<"Enter a DNA string: ";
            std::cin>>comp_check;
        }
    }
    return comp_check;
}

//handle menu option function
void handle_menu_option(int option)
{
    	std::string dna;
        //calls proper function according to option selected
		switch(option)
		{
			case 1:
                dna = content_string_check();
				std::cout<<"GC content: "<<get_gc_content(dna)<<endl;
			break;

			case 2:
                dna = comp_string_check();
				std::cout<<"DNA Complement: "<<get_dna_complement(dna)<<endl;
			break;

			case 3:
				std::cout<<"Are you sure you want to exit?(y/n): ";
				char confirm;
				std::cin>>confirm;

				while (confirm != 'y' && confirm != 'n')
				{
				    std::cout<<"Invalid entry \n";
                    std::cout<<"Are you sure you want to exit?(y/n): ";
                    std::cin>>confirm;
				}

				if(confirm == 'y')
				{
					std::cout<<"Exiting program...";
				}
				else if(confirm == 'n')
				{
					run_menu();
				}
			    break;
			default:
				std::cout<<"Invalid Option \n";
		}
}
