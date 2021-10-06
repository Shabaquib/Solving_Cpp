/* create a function that takes an array and removes the odd values, keeping only even values
*/
#include<iostream>
#include<vector>

int main()
{
    std::vector<int> array1 = {1,2,3,4,5,6,7,8,9};
    std::vector<int> array2;

    for(int i=0;i<array1.size(); i++)
    {
        if(array1[i]%2 == 0)
            array2.push_back(array1[i]);
    }

    for(int item: array2)
        std::cout<<item<<" ";

    return 0;
}
