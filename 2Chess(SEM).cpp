#include<stdio.h>
int main(){
int a[8][8];
int X,Y;
for(X=0;X<8;X++){
for(Y=0;Y<8;Y++){
if(X%2==0 && Y%2==0){
a[X][Y]=1;
}
}
}
for(X=0;X<8;X++){
for(Y=0;Y<8;Y++){
if(X%2!=0 && Y%2!=0){
a[X][Y]=1;
}
}
}
for(X=0;X<8;X++){
for(Y=0;Y<8;Y++){
if(X%2==0 && Y%2!=0){
a[X][Y]=0;
}
}
}
for(X=0;X<8;X++){
for(Y=0;Y<8;Y+=2){
if(X%2!=0 && Y%2==0){
a[X][Y]=0;
}
}
}
int A,B,C,D;
scanf("%d%d%d%d",&A,&B,&C,&D);
if(a[A][B]==a[C][D]){
printf("Same Color");
}
else{
printf("Diferent Color");
}
}
