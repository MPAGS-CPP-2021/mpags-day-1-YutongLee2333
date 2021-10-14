#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

int main(int argc, char* argv[])
{   
    //This is a comment
    /*This is a 
    Multiline comment */
    
    for (size_t i(0); i< )
    const std::vector<std::string> cmdLineArgs { argv, argv+argc};

    char in_char('x');
    
    for(int i{1}; 1< cmdLineArg) 
    // -------------------------------------------------------------------------------
    // Take each letter from user input and in each case:
    char in_char('x');
    while(std::cin >> in_char)
    {
        //Loop until the user presses Enter than then Ctrl+D
        std::cout<<"transliteration the input,Loop unitl user presser Enter then Ctrl+D"<<std::endl;
        std::string in_str{""};
        if (isalnum(in_char))  //checks if in_char is an alphanumeric
        {
            if(islower(in_char))  //Convert to upper case
            {
                in_char = toupper(in_char);
            }
            switch(in_char)  //Change numbers to words
            {
                case '0':
                    in_char = " ZERO";
                    break;
                case '1':
                    in_char = "ONE"; 
                    break;
                case '2':
                    in_char = "TWO";
                    break;
                case '3':
                    in_char = "THREE";
                    break;
                case '4':
                    in_char = "FOUR";
                    break;
                case '5':
                    in_char = "FIVE";
                    break;
                case '6':
                    in_char = "SIX";
                    break;
                case '7':
                    in_char = "SEVEN";
                    break;
                case '8':
                    in_char = "EIGHT";
                    break;
                case '9':
                    in_char = "NINE";
                    break;
            }
     
            in_str += in_char;
            std::cout<< in_str <<std::endl;
        }


    }

  

    
}
