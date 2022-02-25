#include<stdio.h>
#include<string.h>
struct customer{
char name[15];
int amount;
char mobile_no[10];
};
int main(){
struct customer s1[32];
int X,Y,Z=0;
for(Y=0;Y<2;Y++){
scanf("%s",s1[Y].name);
scanf("%d",&s1[Y].amount);
scanf("%s",s1[Y].mobile_no);
}
for(Y=0;Y<2;Y++){
if(s1[Y].amount<0){
printf("Invalid Amount");
return 0;
}
 if(strlen(s1[Y].mobile_no)!=10){
printf("Invalid Mobile Number\n");
return 0;

}
 int i=0;
 while(i!=10){
     if(!(s1[Y].mobile_no[i]>='0' && s1[Y].mobile_no[i]<='9')){
         printf("invalid entry");
         return 0;
     }
     i+=1;
 }

}
printf("%d",s1[0].amount+s1[1].amount);
}
