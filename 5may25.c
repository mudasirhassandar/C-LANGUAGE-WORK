//operators all types


#include<stdio.h>
 //if anumber is divisible by 2 or not

int main(){
    int x;
    printf("enter number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
return 0;
}

int main(){
    int x;
    printf("enter number : ");
    scanf("%d", &x);
    printf("%d",x>9 && x<100);
return 0;
}


int main(){
    int x;
    printf("enter number : ");
    scanf("%d", &x);
    if(x%2==0){
        printf("x is even /n");
    }
    else{
        printf("x is odd \n");
    }
return 0;
}


