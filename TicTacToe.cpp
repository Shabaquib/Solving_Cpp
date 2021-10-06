/*
Tic Tac Toe game
*/

#include<iostream>
#include<string>
#include<vector>
// 32- , 88-X, 79-O

char placeChar(int);
void Winner(int);
void ScreenBuilder(std::vector<int>);
bool WinningStack(std::vector<int>);

int main()
{
    std::vector<int> ticArray = {32,32,32,32,32,32,32,32,32};
    int mark1 = 88;
    int mark2 = 79;
    int counter = 0;
    bool playerTurn = true;
    bool sentinelWin = false;
    int input;
    ScreenBuilder(ticArray);

    while(counter <9 && sentinelWin == false)
    {
        if(playerTurn)
        {
            std::cout<<"Player 1: Enter the index:";
            std::cin>>input;
            ticArray[input-1] = mark1;
        }
        else
        {
            std::cout<<"Player 2: Enter the index: ";
            std::cin>>input;
            ticArray[input-1] = mark2;
        }
        playerTurn = !(playerTurn);
        counter++;
        ScreenBuilder(ticArray);
        sentinelWin = WinningStack(ticArray);
    }

    return 0;
}

void ScreenBuilder( std::vector<int> arr)
{
    system("cls");
    std::cout<<"\nWelcome to TicTacToe game: "<<std::endl;
    std::cout<<"Player 1 has (X), Player 2 has (0):\n"<<std::endl;

    std::cout<<" "<<placeChar(arr[0])<<" | "<<placeChar(arr[1])<<" | "<<placeChar(arr[2])<<" "<<std::endl;
    std::cout<<"---|---|---"<<std::endl;
    std::cout<<" "<<placeChar(arr[3])<<" | "<<placeChar(arr[4])<<" | "<<placeChar(arr[5])<<" "<<std::endl;
    std::cout<<"---|---|---"<<std::endl;
    std::cout<<" "<<placeChar(arr[6])<<" | "<<placeChar(arr[7])<<" | "<<placeChar(arr[8])<<" "<<std::endl;
}

char placeChar(int arg)
{
    return char(arg);
}

bool WinningStack(std::vector<int> array)
{
    if(array[1]==array[0] && array[2] == array[0] && array[0] != 32)
    {
        Winner(array[0]);
        return true;
    }
    else if(array[4]==array[3] && array[5] == array[3] && array[3] != 32)
    {
        Winner(array[3]);
        return true;
    }
    else if(array[7]==array[6] && array[8] == array[6] && array[6] != 32)
    {
        Winner(array[6]);
        return true;
    }
    else if(array[3]==array[0] && array[6] == array[0] && array[0] != 32)
    {
        Winner(array[0]);
        return true;
    }
    else if(array[4]==array[1] && array[7] == array[1] && array[1] != 32)
    {
        Winner(array[1]);
        return true;
    }
    else if(array[5]==array[2] && array[8] == array[2] && array[2] != 32)
    {
        Winner(array[2]);
        return true;
    }
    else if(array[4]==array[0] && array[8] == array[0] && array[0] != 32)
    {
        Winner(array[0]);
        return true;
    }
    else if(array[6]==array[4] && array[2] == array[4] && array[4] != 32)
    {
        Winner(array[4]);
        return true;
    }
    else
        return false;
}

void Winner(int value)
{
    if(value == 88)
        std::cout<<"\nPlayer 1 wins:"<<std::endl;
    else if(value == 79)
        std::cout<<"\nPlayer 2 wins: "<<std::endl;
}
