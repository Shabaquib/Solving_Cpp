/*
Return the masked credit card number, (Replace all with '#', except the last four digits).
*/

#include<iostream>
#include<string>

void masker(std::string);

int main()
{
    std::string inputString, maskedString;
    std::cout<<"Enter your credit card number: ";
    std::cin>>inputString;

    masker(inputString);

}


void masker(std::string str)
{
    if(str.length() < 4)
        std::cout<<str;
    else
    {
        str.replace(0, str.length()-4, str.length()-4, '#'),
        std::cout<<str<<std::endl;
    }


}
