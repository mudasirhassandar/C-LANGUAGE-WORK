 //concept of if and else
 #include<stdio.h>
 int main(){

char ch;
printf("enter character : ");
scanf("%c", &ch);
if(ch >= 'a' && ch <= 'z'){
   printf("alphabet is lower case");
}else{
    printf("alphabet is upper case");
} return 0;

//LOOPS:
//1) FOR LOOP
 }
#include<stdio.h>
int main(){

for(int i=1; i<=1000; i= i+1){
    printf("hello mudasir\n");
}
return 0;
}

#include<stdio.h>
int main(){
for(int i=2;i<=50;i+=2){
   printf("%d\n",i);
}
return 0;
}

#include<stdio.h>
int main(){
    int i=2;
    printf("%d\n",i--);
    printf("%d\n",i);
   return 0;
}


//WHILE LOOP
#include<stdio.h>
int main(){

int i=0;
while(i<=4){
   printf("%d\n",i);
   i++;
}
return 0;
}


#include<stdio.h>
int main(){

int n;
printf("enter number: ");
scanf("%d",&n);

int i=0;
while(i <= n){
    printf("%d\n",i);
    i++;
}

return 0;
}

//DO WHILE LOOP

#include<stdio.h>
int main(){
int n;
printf("|enter a number : ");
scanf("%d",&n);
int i=n;
do{
    printf("%d\n",i);
    i--;
}while(i>=1);
return 0;
}


//print the sum of n natural numbers and also print them in revers ?


#include<stdio.h>
int main(){

    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int sum=0;
    for(int i=n;i>=1 ;i--){
        
         printf("%d\n", i );
         sum+=i;
    }
     printf("sum is %d\n",sum);
   

return 0;
}
#include<stdio.h>
int main(){

char ch='A';
printf(" %d \n",ch);

return 0;
}