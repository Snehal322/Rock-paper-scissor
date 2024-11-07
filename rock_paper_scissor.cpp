# include <iostream>
# include <ctime>

using namespace std;

char getUserChoice();

char getComputerChoice();

void showChoice( char choice);

void chooseWinner( char player1, char computer);


int main()
{
    char player1; 
    char computer;

    player1 = getUserChoice();      // asssign value fron the function getUserChoice
    cout << " Player 1 selected : ";
    showChoice(player1);

    computer = getComputerChoice();
    cout << " Player 2 selected : ";

    showChoice(computer);   

    cout << " Winner is : " ; 
    chooseWinner(player1, computer);
}

// Take users choice until he enters correct inout in the form of p , r, or s
char getUserChoice()

{
    char player1;
    cout << " Enjoy your Rock Scissors game..!!" <<endl;

    do{
        
        cout << " ************** Select for below mention notations **************\n";
        cout << " P for papers \n";
        cout << " r for rock \n";
        cout << " s for sicssors \n";

        cin >> player1;
        //cout << player1;
    }
    while(player1 != 'r' &&  player1 !='p' && player1 != 's');

    return player1;
}

//  Get the input from the computer using rand function
char getComputerChoice()
{
    srand(time(0));     // random choice generation
    int num = rand() % 3 + 1;

    switch(num)
    {
        case 1: 
            return 'r';
        case 2: 
            return 'p';
        case 3: 
            return 's';
    }
}

// To print the user inputs
void showChoice( char choice)
{

    switch (choice)
    
    {
    case 'r':
        cout << " Rock\n";
        break;

    case 'p':
        cout << " Paper \n";
        break;

    case 's':
        cout << " Scissor \n";
    
    
    }
    
}

// Evaluate the winner and display results of the game
void chooseWinner( char player1, char computer)
{

    switch(player1)
    {
        case 'r' : 
        if( computer == 'r')
        {
            cout << " Its a tie ..!\n";
            
        }
        else if( computer == 's')
        {
            cout << " Player 1 wins .. !\n";

        }
        else
        {
            cout << " Computer ie. player 2 wins  .. You looose.. !\n" ; 
        }
        break;

        case 's':
            if(computer =='s')
            {
                cout  << " Its a tie ..!\n" ;

            }
            else if( computer == 'p')
            {
                cout << " Computer ie. player 2 wins  .. You looose.. !\n";
            }
            else
            {
                cout << player1 <<" i.e. Player 1 wins ..!\n" ;
            }
            break;

        case 'p':
            if(computer == 's')
            {
                cout << " Computer ie. player 2 wins  .. You looose..!\n";

            }
            else if (computer == 'r')
            {
                cout << player1 << " Player 1 wins ..!\n";
            }
            else
            {
                cout << " Its a tie ..!\n";
            }
            break;

    }
    
}
