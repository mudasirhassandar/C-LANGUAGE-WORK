// SWITCH

#include<stdio.h>
int main(){

int day;
printf("enter day (1-7)\n");
scanf("%d", &day);

switch(day){

case 1 : printf("monday\n"); 
       break;
case 2  : printf("tuesday\n");
       break;
case 3  : printf("wednesday\n");
       break;
case 4 : printf("thursday\n"); 
       break;
case 5 : printf("friday\n");
       break;
case 6 : printf("saturday\n");
        break;
case 7 : printf("suynday\n");
        break;
default : printf("not valid day\n");}

}

// making a marks card on if and else if 

#include<stdio.h>

int main(){

int marks;
 printf("enter marks (0-100)\n");
 scanf("%d", &marks);

 if(marks >= 90 && marks < 100){
       printf("grade frist\n");
 }
else if (marks>80 && marks<90){
       printf("grade b\n");
}
else if (marks>70 && marks<80){
       printf("grade c");
}
else if (marks==70 || marks<70){
       printf("grade d-e");
}
return 0;
}

