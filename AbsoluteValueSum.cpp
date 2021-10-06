/* Take an array of integers (positive, negative or both) and
   return the sum of absolute value of each element.
   Test Cases: {2, -1, -3, 4, 8} -> 18
               {-1} -> 1
               {-1, -3, -5, -4, -10, 0} -> 23
               {8, 9, 10, 32, 101, -10} -> 170
               {500} -> 500
*/


#include<iostream>
#include<cmath>
#include<vector>

int main()
{
    std::vector<signed int> listArg {12, -15, -9, 56};
    int absoluteSum = 0;

    for(std::vector<signed int>::iterator it = listArg.begin(); it != listArg.end(); it++)
    {
        absoluteSum += abs((*it));
    }
    std::cout<<absoluteSum<<std::endl;

    return 0;
}
