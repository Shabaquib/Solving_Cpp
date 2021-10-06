#include<iostream>
#include<string>

void validator(std::string);

int main()
{
    std::string input1 = "#CD5C5C";
    std::string input2 = "#EAECEE";
    std::string input3 = "#eaecee";
    std::string input4 = "#123456";
    std::string input5 = "#987654";

    validator(input1);
    validator(input2);
    validator(input3);
    validator(input4);
    validator(input5);

    return 0;
}

void validator(std::string arg)
{
    if(arg.at(0) == '#' && arg.length() == 7)
    {
        std::size_t found = arg.find_first_not_of("1234567890ABCDEFabcdef");
        if(found == std::string::npos)
        {
            std::cout<<"Valid hex code!"<<std::endl;
        }
        else
        {
            std::cout<<"Not valid hex code!"<<std::endl;
        }
    }
    else
    {
        std::cout<<"Not a hex value!"<<std::endl;
    }
}
