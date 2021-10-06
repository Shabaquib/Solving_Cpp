/*
Get the number of words in a sentence.
*/
#include<iostream>
#include<string>

int main()
{
    std::string stringArg, strSearch;
    int wordCount = 0;
    unsigned pos = 0;

    std::cout<<"Enter the sentence: "<<std::endl;
    getline(std::cin, stringArg);
    std::string::size_type found = 0;

    while(found != std::string::npos && pos<stringArg.length())
    {
        found = stringArg.find(" ", pos);
        if(found == std::string::npos)
        {
            std::cout<<"I am here!"<<std::endl;
        }

        pos = found+1;
        wordCount++;
        std::cout<<"WordCount: "<<wordCount<<std::endl;

    }


    return 0;
}
