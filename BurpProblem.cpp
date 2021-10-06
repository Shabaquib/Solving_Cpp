/* return a string "Burp" with the amount of r's determined by an integer parameter.*/

#include<iostream>
#include<string>

int main()
{
    std::string outPut = "Bu";
    unsigned int num;

    std::cout<<"Enter an integer: ";
    std::cin>>num;

    outPut.append(num, 'r');
    outPut.append("p");
    std::cout<<outPut<<std::endl;

    return 0;
}
