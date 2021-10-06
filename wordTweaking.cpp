/* Create a function that tweaks letters by one forward(+1)
   or backwards(-1) according to an array:
   TestCases: "apple", {0,1,-1,0,-1} -> "aqold"
              "many", {0,0,0,-1} -> "manx"
              "rhino", {1,1,1,1,1} => "sijop"
              "xyz", {1,1,1} -> "yza"
	      "abc", {-1,-1,-1} -> "zab"
*/
#include<iostream>
#include<vector>
#include<string>

int main()
{
    std::vector<signed int> array1 = {-1, -1, -1};
    std::string array2 = "abc";
    std::string output = "";

    for(unsigned i =0; i<array1.size(); i++)
    {
        if(int(array2.at(i)) == 97 && array1.at(i) == -1)
        {
            output.append("z");
        }
        else if(int(array2.at(i)) == 122 && array1.at(i) == 1)
        {
            output.append("a");
        }
        else
        {
            output.append(1u, char(int(array2.at(i))+array1.at(i)));
        }
    }

    std::cout<<output;

    return 0;
}
