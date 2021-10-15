#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

int main(int argc, char* argv[])
{   
    //This is a comment
    /*This is a 
    Multiline comment */
    
    const std::vector<std::string> cmdLineArgs { argv, argv+argc};  
    for(size_t i{0}; i< cmdLineArgs.size(); i++)
    {
        // std::cout<< "Index: "<< i << " "<< cmdLineArgs[i] <<std::endl;
        std::string flag_cmdLArgs{cmdLineArgs[i]}; //define cmd line args's flag as flag_cmdLArgs;
        if (flag_cmdLArgs == "--help" || flag_cmdLArgs == "-h")
        {
            std::cout << "help txt : \nthe input will be transliterated to uppercase and loop until user presser Enter then Ctrl+D; \nPlesase put a  input_filename after '-i', put a output_filename after '-o' " << std::endl;
        }
        else if (flag_cmdLArgs == "--version")
        {
            std::cout << "v0.1.1"<< std::endl; //waiting fix; pull from git
        }
        else if (flag_cmdLArgs == "-i")
        {
            std::cout << "input file: "<< cmdLineArgs[i+1] << std::endl;
        }
        else if (flag_cmdLArgs == "-o")
        {
            std::cout << "output file: "<< cmdLineArgs[i+1] << std::endl; // need add elseif if nothing behind -o
        }
        // else 
        // {
        //     if(i>0)  //or use flag_cmdLArgs != " ./mpags-cipher" ? || still will warn at input/outputfile name.
        //     {
        //         if (flag_cmdLArgs != "--help" || flag_cmdLArgs != "-h" || flag_cmdLArgs != "--version"|| flag_cmdLArgs != "-i"|| flag_cmdLArgs != "-o")
        //             {
        //                 std::cout << "Error! \nPlesase use '-h' check help txt"<< std::endl;
        //             }
        //     }
            
        // }

    }
    // -------------------------------------------------------------------------------
    // Take each letter from user input and in each case:
    char in_char('x');
    while(std::cin >> in_char)
    {
        //Loop until the user presses Enter than then Ctrl+D
        std::string in_str{""};
        if (isalnum(in_char))  //checks if in_char is an alphanumeric
        {
            if(islower(in_char))  //Convert to upper case
            {
                in_char = toupper(in_char);
            }
            
            in_str += in_char;

            switch(in_char)  //Change numbers to words
            {
                case '0':
                    in_str +=  "ZERO";
                    break;
                case '1':
                    in_str +=  "ONE"; 
                    break;
                case '2':
                    in_str +=  "TWO";
                    break;
                case '3':
                    in_str +=  "THREE";
                    break;
                case '4':
                    in_str +=  "FOUR";
                    break;
                case '5':
                    in_str +=  "FIVE";
                    break;
                case '6':
                    in_str +=  "SIX";
                    break;
                case '7':
                    in_str +=  "SEVEN";
                    break;
                case '8':
                    in_str +=  "EIGHT";
                    break;
                case '9':
                    in_str +=  "NINE";
                    break;
            }
     
            std::cout<< in_str <<std::endl;
        }


    }

  

    
}
