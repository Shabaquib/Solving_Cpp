/*
Find the word created by using lowercase letters which are now scattered in the midst of uppercase letters.
*/

#include<iostream>
#include<string>

int main()
{
    std::string inputString, outputString;
    int pos;
    std::string::size_type found=0;

    inputString = "";
    outputString = "";

    while(found != std::string::npos)
    {
        found = inputString.find_first_of("abcdefghijklmnopqrstuvwxyz");
        outputString.append(inputString.at(found));
        inputString.copy(inputString, found+1, )
    }
}
