#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

char board[3][3];
const char PLAYER = 'X';    
const char COMPUTER = 'O';  


void resetBoard();       
void printBoard();      
int checkFreeSpace();    
void playerMove();     
void computerMove();   
char checkWinner();    
void printWinner(char winner);

int main(){
    char winner= ' ';
    char response;
    do{
        winner = ' ';     
        resetBoard();      
        
        while(winner == ' ' && checkFreeSpace() != 0)
        {
            printBoard();
            playerMove();  
    
            winner = checkWinner(); 
            if(winner != ' ' || checkFreeSpace() == 0 ){
                break; 
                }
                computerMove(); 
                winner = checkWinner();
                if(winner != ' ' || checkFreeSpace() == 0 ) {
                    break; 
                    }
                }
                printBoard();
                printWinner(winner); 
                
                printf("Do you want to play again? (y/n): ");                
                scanf(" %c", &response); 
                
                response = tolower(response); 
                }while(response == 'y');

                printf("Thanks for playing!\n");
                
                return 0;
            }

void resetBoard(){
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){

            board[i][j]= ' '; 
        }
    }


}
void printBoard(){
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n---|---|---\n");
    printf("\n");


}  
int checkFreeSpace(){

    int freeSpaces = 9;          // Start with 9 free spaces

    // Count the number of free spaces in the board
    
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(board[i][j] !=' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;


}  
void playerMove(){
    int x, y;

    do{
        printf("Select row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("Select column #(1-3): ");
        scanf("%d", &y);
        y--;
        if(board[x][y] != ' ')
        {
            printf("Invalid move! Try again.\n");
        } 
        else
        {
            board[x][y] = PLAYER; 
            break ;
        }
        
    }
    while (board[x][y] != ' ');


}
void computerMove(){
    
    srand(time(0));
    int x, y ;

    if(checkFreeSpace() > 0){
        do{
            x = rand() %3;
            y = rand() %3;
        }while(board[x][y] != ' '); 


        board[x][y] = COMPUTER; 
    }
    else {
        printWinner(' '); // 
        printf("It's a draw! No free spaces left.\n");
    }



}
char checkWinner(){

    
    
    for(int i = 0; i<3 ; i++){

        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0 != ' '])
        {
            return board[i][0];  
        }
    }
    for(int i = 0; i<3 ; i++){

        if(board[0][i] == board[1][i] && board[0][i] == board[i][2] && board[0][i] != ' ')
        {
            return board[0][i];  
        }
    }

   
    if(board[0][0] == board[1][1] && board[0][0] ==  board[2][2] && board[0][0] != ' '){

        return board[0][0];
    }

    if(board[0][2] == board[1][1] && board[0][2] ==  board[2][0]){

        return board[0][2];
    }
    
    
    return ' ';


}
void printWinner(char winner){

    if(winner == PLAYER){
        printf("You win!\n");
    }
    else if(winner == COMPUTER){
        printf("Computer wins!\n");
    }
    else{
        printf("It's a draw!\n");
    }

}