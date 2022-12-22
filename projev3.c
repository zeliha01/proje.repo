// SENA NUR TÜRKMEN 22181616006
// ZELİHA KIYAK     22181616053

#include <stdio.h>
#include <conio.h>

FILE *dosya;
char karakter;
void okuma(){
    if(dosya==NULL){
    printf("DOSYA BULUNAMADI");
}

do{
karakter=getc(dosya);
 printf("%c",karakter);
 }
while(karakter!=EOF);
fclose(dosya);
}
char x,q;
//i(içedönük)-e(dışadönük)   s(algılama)-n(sezme)   t(düşünme)-f(duygu)    j(yargılayan)-p(uzlaşma)
int i,s,t,j,son;
char d[10];
void puan(int a,int b,int c,int d){
    i+=a;
    s+=b;
    t+=c;
    j+=d;
}

void soru1(){    
    do{
    dosya=fopen("soru1.txt","r");
    okuma();
    scanf("%s",&d[0]);
    if(d[0]!='a'&&d[0]!='A'&&d[0]!='b'&&d[0]!='B'&&d[0]!='c'&&d[0]!='C'&&d[0]!='d'&&d[0]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[0]!='a'&&d[0]!='A'&&d[0]!='b'&&d[0]!='B'&&d[0]!='c'&&d[0]!='C'&&d[0]!='d'&&d[0]!='D');
    }
    
void soru2(){    
    do{
    dosya=fopen("soru2.txt","r");
    okuma();
    scanf("%s",&d[1]);
    if(d[1]!='a'&&d[1]!='A'&&d[1]!='b'&&d[1]!='B'&&d[1]!='c'&&d[1]!='C'&&d[1]!='d'&&d[1]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[1]!='a'&&d[1]!='A'&&d[1]!='b'&&d[1]!='B'&&d[1]!='c'&&d[1]!='C'&&d[1]!='d'&&d[1]!='D');
    }
    
void soru3(){    
    do{
    dosya=fopen("soru3.txt","r");
    okuma();
    scanf("%s",&d[2]);
    if(d[2]!='a'&&d[2]!='A'&&d[2]!='b'&&d[2]!='B'&&d[2]!='c'&&d[2]!='C'&&d[2]!='d'&&d[2]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[2]!='a'&&d[2]!='A'&&d[2]!='b'&&d[2]!='B'&&d[2]!='c'&&d[2]!='C'&&d[2]!='d'&&d[2]!='D');
    }

void soru4(){    
    do{
    dosya=fopen("soru4.txt","r");
    okuma();
    scanf("%s",&d[3]);
    if(d[3]!='a'&&d[3]!='A'&&d[3]!='b'&&d[3]!='B'&&d[3]!='c'&&d[3]!='C'&&d[3]!='d'&&d[3]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[3]!='a'&&d[3]!='A'&&d[3]!='b'&&d[3]!='B'&&d[3]!='c'&&d[3]!='C'&&d[3]!='d'&&d[3]!='D');
    }
    
void soru5(){    
    do{
    dosya=fopen("soru5.txt","r");
    okuma();
    scanf("%s",&d[4]);
    if(d[4]!='a'&&d[4]!='A'&&d[4]!='b'&&d[4]!='B'&&d[4]!='c'&&d[4]!='C'&&d[4]!='d'&&d[4]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[4]!='a'&&d[4]!='A'&&d[4]!='b'&&d[4]!='B'&&d[4]!='c'&&d[4]!='C'&&d[4]!='d'&&d[4]!='D');
    }
    
void soru6(){    
    do{
    dosya=fopen("soru6.txt","r");
    okuma();
    scanf("%s",&d[5]);
    if(d[5]!='a'&&d[5]!='A'&&d[5]!='b'&&d[5]!='B'&&d[5]!='c'&&d[5]!='C'&&d[5]!='d'&&d[5]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[5]!='a'&&d[5]!='A'&&d[5]!='b'&&d[5]!='B'&&d[5]!='c'&&d[5]!='C'&&d[5]!='d'&&d[5]!='D');
    }

void soru7(){    
    do{
    dosya=fopen("soru7.txt","r");
    okuma();
    scanf("%s",&d[6]);
    if(d[6]!='a'&&d[6]!='A'&&d[6]!='b'&&d[6]!='B'&&d[6]!='c'&&d[6]!='C'&&d[6]!='d'&&d[6]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[6]!='a'&&d[6]!='A'&&d[6]!='b'&&d[6]!='B'&&d[6]!='c'&&d[6]!='C'&&d[6]!='d'&&d[6]!='D');
    }
void soru8(){    
    do{
    dosya=fopen("soru8.txt","r");
    okuma();
    scanf("%s",&d[7]);
    if(d[7]!='a'&&d[7]!='A'&&d[7]!='b'&&d[7]!='B'&&d[7]!='c'&&d[7]!='C'&&d[7]!='d'&&d[7]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[7]!='a'&&d[7]!='A'&&d[7]!='b'&&d[7]!='B'&&d[7]!='c'&&d[7]!='C'&&d[7]!='d'&&d[7]!='D');
    }
void soru9(){    
    do{
    dosya=fopen("soru9.txt","r");
    okuma();
    scanf("%s",&d[8]);
    if(d[8]!='a'&&d[8]!='A'&&d[8]!='b'&&d[8]!='B'&&d[8]!='c'&&d[8]!='C'&&d[8]!='d'&&d[8]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[8]!='a'&&d[8]!='A'&&d[8]!='b'&&d[8]!='B'&&d[8]!='c'&&d[8]!='C'&&d[8]!='d'&&d[8]!='D');
    }
    
void soru10(){    
    do{
    dosya=fopen("soru10.txt","r");
    okuma();
    scanf("%s",&d[9]);
    if(d[9]!='a'&&d[9]!='A'&&d[9]!='b'&&d[9]!='B'&&d[9]!='c'&&d[9]!='C'&&d[9]!='d'&&d[9]!='D'){
    printf("Lütfen geçerli bir şık giriniz");}
    }
    while(d[9]!='a'&&d[9]!='A'&&d[9]!='b'&&d[9]!='B'&&d[9]!='c'&&d[9]!='C'&&d[9]!='d'&&d[9]!='D');
    }
int main()
{   char ad[20];
    printf("Size bu test boyunca nasıl hitap edelim?\n");
    scanf("%s",&ad);
    printf("merhaba %s,\nBu testimizde verdiğin cevaplara göre kişilik tipini bulacağız.\n-----------------------\n",ad);
    printf("Testimiz 10 sorudan oluşmaktadır.\nS tuşuna basarak teste başlayabilirsin.\nİyi eğlenceler :D\n");
    
    do{
    scanf("%s",&x);
    switch(x){
        case'S':
        case's':{soru1();soru2();soru3();soru4();soru5();soru6();soru7();soru8();soru9();soru10();break;
        default:printf("SADECE S TUŞUNA BASARAK BAŞLAYABİLİRSİNİZ\n");
            }
        }
    }while(x!='s'&&x!='S');

    switch(d[0]){
        case'a':
        case'A':puan(10,7,0,0);break;
        case'b':
        case'B':puan(5,4,5,1);break;
        case'c':
        case'C':puan(3,3,8,3);break;
        case'd':
        case'D':puan(0,2,10,10);break;
    }
        switch(d[1]){
        case'a':
        case'A':puan(5,0,0,5);break;
        case'b':
        case'B':puan(3,8,10,7);break;
        case'c':
        case'C':puan(0,5,8,0);break;
        case'd':
        case'D':puan(10,5,5,6);break;
    }
        switch(d[2]){
        case'a':
        case'A':puan(6,7,0,0);break;
        case'b':
        case'B':puan(3,4,2,7);break;
        case'c':
        case'C':puan(10,5,5,3);break;
        case'd':
        case'D':puan(0,8,10,10);break;
    }
        switch(d[3]){
        case'a':
        case'A':puan(0,10,10,7);break;
        case'b':
        case'B':puan(4,6,7,5);break;
        case'c':
        case'C':puan(8,3,5,3);break;
        case'd':
        case'D':puan(10,0,0,5);break;
    }
        switch(d[4]){
        case'a':
        case'A':puan(6,7,8,9);break;
        case'b':
        case'B':puan(4,3,5,4);break;
        case'c':
        case'C':puan(3,2,7,7);break;
        case'd':
        case'D':puan(10,5,5,10);break;
    }
        switch(d[5]){
        case'a':
        case'A':puan(1,4,10,10);break;
        case'b':
        case'B':puan(3,6,5,7);break;
        case'c':
        case'C':puan(4,2,3,4);break;
        case'd':
        case'D':puan(8,1,0,0);break;
    }
        switch(d[6]){
        case'a':
        case'A':puan(5,3,5,10);break;
        case'b':
        case'B':puan(6,5,6,7);break;
        case'c':
        case'C':puan(7,1,5,4);break;
        case'd':
        case'D':puan(2,10,2,0);break;
    }
        switch(d[7]){
        case'a':
        case'A':puan(3,3,2,8);break;
        case'b':
        case'B':puan(4,4,3,5);break;
        case'c':
        case'C':puan(5,6,8,4);break;
        case'd':
        case'D':puan(6,5,9,3);break;
    }
        switch(d[8]){
        case'a':
        case'A':puan(3,5,10,10);break;
        case'b':
        case'B':puan(5,3,7,6);break;
        case'c':
        case'C':puan(6,2,3,2);break;
        case'd':
        case'D':puan(8,2,0,0);break;
    }
        switch(d[9]){
        case'a':
        case'A':puan(10,5,2,3);break;
        case'b':
        case'B':puan(6,6,3,5);break;
        case'c':
        case'C':puan(5,7,5,7);break;
        case'd':
        case'D':puan(0,8,8,8);break;
    }
    /*printf("\n-----------------------\niçe dönük %%%d\t%%%d dışa dönük\nalgılama  %%%d\t%%%d sezgisel",i,100-i,s,100-s);
    printf("\nmantıklı  %%%d\t%%%d duygusal\niddiali   %%%d\t%%%d uzlaşmacı\n-----------------------\n",t,100-t,j,100-j);
    */
    dosya=fopen("sonuc.txt","w+");
    fprintf(dosya,"\n-----------------------\niçe dönük %%%d\t%%%d dışa dönük\nalgılama  %%%d\t%%%d sezgisel",i,100-i,s,100-s);
    fprintf(dosya,"\nmantıklı  %%%d\t%%%d duygusal\niddiali   %%%d\t%%%d uzlaşmacı\n-----------------------\n",t,100-t,j,100-j);
    fclose(dosya);
    dosya=fopen("sonuc.txt","r");
    okuma();
    printf("%s senin kişilik tipin : ",ad);
    if(i>50)
    printf("i");
    else
    printf("e");
    if(s>50)
    printf("s");
    else
    printf("n");
    if(t>50)
    printf("t");
    else
    printf("f");
    if(j>50)
    printf("j");
    else
    printf("p");
    
    printf("\n-----------------------\nKişilik tipiniz hakkında bilgi enimek için B tuşuna, testten çıkmak için Q tuşuna basınız.\n");
    scanf("%s",&q);
    switch(q)
    {    
    case'Q':
    case'q':printf("Testimiz sonlanmıştır.");break;
    case'b':
    case'B':{
        printf("Size uygun sayıyı tuşlayınız:\n1-INTJ\t2-INTP\t3-ENTJ\t4-ENTP\n5-INFJ\t6-INFP\t7-ENFJ\t8-ENFP\n9-ISTJ\t10-ISFJ\t11-ESTJ\t12-ESFJ\n13-ISTP\t14-ISFP\t15-ESTP\t16-ESFP");
        scanf("%d",&son);
        switch(son){
            case 1:dosya=fopen("son1.txt","r");okuma();break;
            case 2:dosya=fopen("son2.txt","r");okuma();break;
            case 3:dosya=fopen("son3.txt","r");okuma();break;
            case 4:dosya=fopen("son4.txt","r");okuma();break;
            case 5:dosya=fopen("son5.txt","r");okuma();break;
            case 6:dosya=fopen("son6.txt","r");okuma();break;
            case 7:dosya=fopen("son7.txt","r");okuma();break;
            case 8:dosya=fopen("son8.txt","r");okuma();break;
            case 9:dosya=fopen("son9.txt","r");okuma();break;
            case 10:dosya=fopen("son10.txt","r");okuma();break;
            case 11:dosya=fopen("son11.txt","r");okuma();break;
            case 12:dosya=fopen("son12.txt","r");okuma();break;
            case 13:dosya=fopen("son13.txt","r");okuma();break;
            case 14:dosya=fopen("son14.txt","r");okuma();break;
            case 15:dosya=fopen("son15.txt","r");okuma();break;
            case 16:dosya=fopen("son16.txt","r");okuma();break;
                }
            }
    }
    
    return 0;
}