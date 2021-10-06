/* This Triangular Number sequence is generated from a pattern of dots that form a triangle, the first 5 numbers in the sequence are: 1, 3, 6, 10, 15
write a function that returns the sequence for given number of iterations.
  *     *
  **    **
        ***
        ****
        *****    
*/  

#include<iostream>

int main()
{
    int counter, outputSequence, buffer = 0;
    std::cout<<"Enter the counter upto which the counter should perform: ";
    std::cin>>counter;

    for(int i = 0; i<counter; i++)
    {
        outputSequence = buffer+(i+1);
        buffer = outputSequence;
    }

    std::cout<<"output is: "<<outputSequence<<std::endl;
}
