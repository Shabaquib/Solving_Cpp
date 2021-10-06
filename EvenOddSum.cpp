#include<iostream>
#include<vector>
#include<cmath>
int main()
{
    std::vector<signed int> argument {1,2,3,4,5,6,7,8,9,10};
    signed int evenSum = 0;
    signed int oddSum = 0;
    int counter = 0;

    while(counter < argument.size())
    {
        if(abs(argument[counter])%2 == 0)
        {
            evenSum += argument[counter];
        }
        else
        {
            oddSum += argument[counter];
        }
        counter++;
    }
    std::cout<<"oddSum: "<<oddSum<<"     evenSum: "<<evenSum<<std::endl;
}
