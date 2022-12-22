#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
FILE *dosya;
char karakter;
void okuma(){
do{
karakter=getc(dosya);
 printf("%c",karakter);
 }
while(karakter!=EOF);
fclose(dosya);
}
int main(){
dosya=fopen("son1.txt","r");
okuma();
dosya=fopen("son2.txt","r");
okuma();
return 0;
}