/* create a function which validates whether a bridge is safe to walk on!*/


#include<iostream>
#include<string>

bool isSafe(std::string);

int main()
{
    std::string string1, string2, string3, string4;

    string1 = "### ##";
    string2 = "#";
    string3 = "# #";
    string4 = "# # ";

    std::cout<<isSafe(string1);
    std::cout<<isSafe(string2);
    std::cout<<isSafe(string3);
    std::cout<<isSafe(string4);

    return 0;
}

bool isSafe(std::string s)
{
   return (s.find(" ") != std::string::npos)? "true" : "false" ;
}
