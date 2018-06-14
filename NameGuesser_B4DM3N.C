//Well my code is not mature since I'm new in programming perhaps it could be done more efficiently.
//B4DM3N
#include<stdio.h>
#include<conio.h>
int main(void)
{
  int X[20],Y[20],i,total;
  char a[6]={'A','F','K','P','U','Z'};
  char b[5]={'B','G','L','Q','V'};
  char c[5]={'C','H','M','R','W'};
  char d[5]={'D','I','N','S','X'};
  char e[5]={'E','J','O','T','Y'};
  char f[20],g[20],h[20],j[20],k[20],l[20],ans;
  clrscr();
  gotoxy(20,5);
  printf("Welcome to Name Guesser (by B4DM3N)\n\t\t\tPress Enter to Continue");
  printf("\n\n\nNote:- This program is in the Beta form.....Enjoy!!");
  getch();
  clrscr();
  Start:
  clrscr();
  printf("How many alphabets are there in the name: ");
  scanf("%d",&total);
  clrscr();
  printf("\tLine1\tLine2\tLine3\tLine4\tLine5\n\t  A\t  B\t  C\t  D\t  E\n\t  F\t  G\t  H\t  I\t  J\n\t  K\t  L\t  M\t  N\t  O\n\t  P\t  Q\t  R\t  S\t  T\n\t  U\t  V\t  W\t  X\t  Y\n\t  Z");
  printf("\n\n Now Enter line numbers one by one where your name alphabets contains !\n");
  for(i=0;i<total;i++){
   printf("\n Enter %d alphabet line number: ",i+1);
   scanf("%d",&X[i]);
  }
  clrscr();
  printf("\tLine1\tLine2\tLine3\tLine4\tLine5\tLine6\n");
  if(X[0]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[0]=a[0];g[0]=a[1];h[0]=a[2];j[0]=a[3];k[0]=a[4];l[0]=a[5];
  }
  if(X[0]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[0]=b[0];g[0]=b[1];h[0]=b[2];j[0]=b[3];k[0]=b[4];l[0]='\0';
  }
  if(X[0]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[0]=c[0];g[0]=c[1];h[0]=c[2];j[0]=c[3];k[0]=c[4];l[0]='\0';
  }
  if(X[0]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[0]=d[0];g[0]=d[1];h[0]=d[2];j[0]=d[3];k[0]=d[4];l[0]='\0';
  }
  if(X[0]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[0]=e[0];g[0]=e[1];h[0]=e[2];j[0]=e[3];k[0]=e[4];l[0]='\0';
  }
  if(total==1)
   goto jump;
  printf("\n");
  if(X[1]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[1]=a[0];g[1]=a[1];h[1]=a[2];j[1]=a[3];k[1]=a[4];l[1]=a[5];
  }
  if(X[1]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[1]=b[0];g[1]=b[1];h[1]=b[2];j[1]=b[3];k[1]=b[4];l[1]='\0';
  }
  if(X[1]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[1]=c[0];g[1]=c[1];h[1]=c[2];j[1]=c[3];k[1]=c[4];l[1]='\0';
  }
  if(X[1]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[1]=d[0];g[1]=d[1];h[1]=d[2];j[1]=d[3];k[1]=d[4];l[1]='\0';
  }
  if(X[1]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[1]=e[0];g[1]=e[1];h[1]=e[2];j[1]=e[3];k[1]=e[4];l[1]='\0';
  }
  if(total==2)
   goto jump;
  printf("\n");
  if(X[2]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[2]=a[0];g[2]=a[1];h[2]=a[2];j[2]=a[3];k[2]=a[4];l[2]=a[5];
  }
  if(X[2]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[2]=b[0];g[2]=b[1];h[2]=b[2];j[2]=b[3];k[2]=b[4];l[2]='\0';
  }
  if(X[2]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[2]=c[0];g[2]=c[1];h[2]=c[2];j[2]=c[3];k[2]=c[4];l[2]='\0';
  }
  if(X[2]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[2]=d[0];g[2]=d[1];h[2]=d[2];j[2]=d[3];k[2]=d[4];l[2]='\0';
  }
  if(X[2]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[2]=e[0];g[2]=e[1];h[2]=e[2];j[2]=e[3];k[2]=e[4];l[2]='\0';
  }
  if(total==3)
   goto jump;
  printf("\n");
  if(X[3]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[3]=a[0];g[3]=a[1];h[3]=a[2];j[3]=a[3];k[3]=a[4];l[3]=a[5];
  }
  if(X[3]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[3]=b[0];g[3]=b[1];h[3]=b[2];j[3]=b[3];k[3]=b[4];l[3]='\0';
  }
  if(X[3]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[3]=c[0];g[3]=c[1];h[3]=c[2];j[3]=c[3];k[3]=c[4];l[3]='\0';
  }
  if(X[3]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[3]=d[0];g[3]=d[1];h[3]=d[2];j[3]=d[3];k[3]=d[4];l[3]='\0';
  }
  if(X[3]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[3]=e[0];g[3]=e[1];h[3]=e[2];j[3]=e[3];k[3]=e[4];l[3]='\0';
  }
  if(total==4)
   goto jump;
  printf("\n");
  if(X[4]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[4]=a[0];g[4]=a[1];h[4]=a[2];j[4]=a[3];k[4]=a[4];l[4]=a[5];
  }
  if(X[4]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[4]=b[0];g[4]=b[1];h[4]=b[2];j[4]=b[3];k[4]=b[4];l[4]='\0';
  }
  if(X[4]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[4]=c[0];g[4]=c[1];h[4]=c[2];j[4]=c[3];k[4]=c[4];l[4]='\0';
  }
  if(X[4]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[4]=d[0];g[4]=d[1];h[4]=d[2];j[4]=d[3];k[4]=d[4];l[4]='\0';
  }
  if(X[4]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[4]=e[0];g[4]=e[1];h[4]=e[2];j[4]=e[3];k[4]=e[4];l[4]='\0';
  }
  if(total==5)
   goto jump;
  printf("\n");
  if(X[5]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[5]=a[0];g[5]=a[1];h[5]=a[2];j[5]=a[3];k[5]=a[4];l[5]=a[5];
  }
  if(X[5]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[5]=b[0];g[5]=b[1];h[5]=b[2];j[5]=b[3];k[5]=b[4];l[5]='\0';
  }
  if(X[5]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[5]=c[0];g[5]=c[1];h[5]=c[2];j[5]=c[3];k[5]=c[4];l[5]='\0';
  }
  if(X[5]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[5]=d[0];g[5]=d[1];h[5]=d[2];j[5]=d[3];k[5]=d[4];l[5]='\0';
  }
  if(X[5]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[5]=e[0];g[5]=e[1];h[5]=e[2];j[5]=e[3];k[5]=e[4];l[5]='\0';
  }
  if(total==6)
   goto jump;
  printf("\n");
  if(X[6]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[6]=a[0];g[6]=a[1];h[6]=a[2];j[6]=a[3];k[6]=a[4];l[6]=a[5];
  }
  if(X[6]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[6]=b[0];g[6]=b[1];h[6]=b[2];j[6]=b[3];k[6]=b[4];l[6]='\0';
  }
  if(X[6]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[6]=c[0];g[6]=c[1];h[6]=c[2];j[6]=c[3];k[6]=c[4];l[6]='\0';
  }
  if(X[6]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[6]=d[0];g[6]=d[1];h[6]=d[2];j[6]=d[3];k[6]=d[4];l[6]='\0';
  }
  if(X[6]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[6]=e[0];g[6]=e[1];h[6]=e[2];j[6]=e[3];k[6]=e[4];l[6]='\0';
  }
  if(total==7)
   goto jump;
  printf("\n");
  if(X[7]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[7]=a[0];g[7]=a[1];h[7]=a[2];j[7]=a[3];k[7]=a[4];l[7]=a[5];
  }
  if(X[7]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[7]=b[0];g[7]=b[1];h[7]=b[2];j[7]=b[3];k[7]=b[4];l[7]='\0';
  }
  if(X[7]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[7]=c[0];g[7]=c[1];h[7]=c[2];j[7]=c[3];k[7]=c[4];l[7]='\0';
  }
  if(X[7]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[7]=d[0];g[7]=d[1];h[7]=d[2];j[7]=d[3];k[7]=d[4];l[7]='\0';
  }
  if(X[7]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[7]=e[0];g[7]=e[1];h[7]=e[2];j[7]=e[3];k[7]=e[4];l[7]='\0';
  }
  if(total==8)
   goto jump;
  printf("\n");
  if(X[8]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[8]=a[0];g[8]=a[1];h[8]=a[2];j[8]=a[3];k[8]=a[4];l[8]=a[5];
  }
  if(X[8]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[8]=b[0];g[8]=b[1];h[8]=b[2];j[8]=b[3];k[8]=b[4];l[8]='\0';
  }
  if(X[8]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[8]=c[0];g[8]=c[1];h[8]=c[2];j[8]=c[3];k[8]=c[4];l[8]='\0';
  }
  if(X[8]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[8]=d[0];g[8]=d[1];h[8]=d[2];j[8]=d[3];k[8]=d[4];l[8]='\0';
  }
  if(X[8]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[8]=e[0];g[8]=e[1];h[8]=e[2];j[8]=e[3];k[8]=e[4];l[8]='\0';
  }
  if(total==9)
   goto jump;
  printf("\n");
  if(X[9]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[9]=a[0];g[9]=a[1];h[9]=a[2];j[9]=a[3];k[9]=a[4];l[9]=a[5];
  }
  if(X[9]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[9]=b[0];g[9]=b[1];h[9]=b[2];j[9]=b[3];k[9]=b[4];l[9]='\0';
  }
  if(X[9]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[9]=c[0];g[9]=c[1];h[9]=c[2];j[9]=c[3];k[9]=c[4];l[9]='\0';
  }
  if(X[9]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[9]=d[0];g[9]=d[1];h[9]=d[2];j[9]=d[3];k[9]=d[4];l[9]='\0';
  }
  if(X[9]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[9]=e[0];g[9]=e[1];h[9]=e[2];j[9]=e[3];k[9]=e[4];l[9]='\0';
  }
  if(total==10)
    goto jump;
  printf("hello");
  printf("\n");
  if(X[10]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[10]=a[0];g[10]=a[1];h[10]=a[2];j[10]=a[3];k[10]=a[4];l[10]=a[5];
  }
  if(X[10]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[10]=b[0];g[10]=b[1];h[10]=b[2];j[10]=b[3];k[10]=b[4];l[10]='\0';
  }
  if(X[10]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[10]=c[0];g[10]=c[1];h[10]=c[2];j[10]=c[3];k[10]=c[4];l[10]='\0';
  }
  if(X[10]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[10]=d[0];g[10]=d[1];h[10]=d[2];j[10]=d[3];k[10]=d[4];l[10]='\0';
  }
  if(X[10]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[10]=e[0];g[10]=e[1];h[10]=e[2];j[10]=e[3];k[10]=e[4];l[10]='\0';
  }
  if(total==11)
   goto jump;
  printf("\n");
  if(X[11]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[11]=a[0];g[11]=a[1];h[11]=a[2];j[11]=a[3];k[11]=a[4];l[11]=a[5];
  }
  if(X[11]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[11]=b[0];g[11]=b[1];h[11]=b[2];j[11]=b[3];k[11]=b[4];l[11]='\0';
  }
  if(X[11]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[11]=c[0];g[11]=c[1];h[11]=c[2];j[11]=c[3];k[11]=c[4];l[11]='\0';
  }
  if(X[11]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[11]=d[0];g[11]=d[1];h[11]=d[2];j[11]=d[3];k[11]=d[4];l[11]='\0';
  }
  if(X[11]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[11]=e[0];g[11]=e[1];h[11]=e[2];j[11]=e[3];k[11]=e[4];l[11]='\0';
  }
  if(total==12)
   goto jump;
  printf("\n");
  if(X[12]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[12]=a[0];g[12]=a[1];h[12]=a[2];j[12]=a[3];k[12]=a[4];l[12]=a[5];
  }
  if(X[12]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[12]=b[0];g[12]=b[1];h[12]=b[2];j[12]=b[3];k[12]=b[4];l[12]='\0';
  }
  if(X[12]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[12]=c[0];g[12]=c[1];h[12]=c[2];j[12]=c[3];k[12]=c[4];l[12]='\0';
  }
  if(X[12]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[12]=d[0];g[12]=d[1];h[12]=d[2];j[12]=d[3];k[12]=d[4];l[12]='\0';
  }
  if(X[12]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[12]=e[0];g[12]=e[1];h[12]=e[2];j[12]=e[3];k[12]=e[4];l[12]='\0';
  }
  if(total==13)
   goto jump;
  printf("\n");
  if(X[13]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[13]=a[0];g[13]=a[1];h[13]=a[2];j[13]=a[3];k[13]=a[4];l[13]=a[5];
  }
  if(X[13]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[13]=b[0];g[13]=b[1];h[13]=b[2];j[13]=b[3];k[13]=b[4];l[13]='\0';
  }
  if(X[13]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[13]=c[0];g[13]=c[1];h[13]=c[2];j[13]=c[3];k[13]=c[4];l[13]='\0';
  }
  if(X[13]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[13]=d[0];g[13]=d[1];h[13]=d[2];j[13]=d[3];k[13]=d[4];l[13]='\0';
  }
  if(X[13]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[13]=e[0];g[13]=e[1];h[13]=e[2];j[13]=e[3];k[13]=e[4];l[13]='\0';
  }
  if(total==14)
   goto jump;
  printf("\n");
  if(X[14]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[14]=a[0];g[14]=a[1];h[14]=a[2];j[14]=a[3];k[14]=a[4];l[14]=a[5];
  }
  if(X[14]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[14]=b[0];g[14]=b[1];h[14]=b[2];j[14]=b[3];k[14]=b[4];l[14]='\0';
  }
  if(X[14]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[14]=c[0];g[14]=c[1];h[14]=c[2];j[14]=c[3];k[14]=c[4];l[41]='\0';
  }
  if(X[14]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[14]=d[0];g[14]=d[1];h[14]=d[2];j[14]=d[3];k[14]=d[4];l[14]='\0';
  }
  if(X[14]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[14]=e[0];g[14]=e[1];h[14]=e[2];j[14]=e[3];k[14]=e[4];l[14]='\0';
  }
  if(total==15)
   goto jump;
  printf("\n");
  if(X[15]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[15]=a[0];g[15]=a[1];h[15]=a[2];j[15]=a[3];k[15]=a[4];l[15]=a[5];
  }
  if(X[15]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[15]=b[0];g[15]=b[1];h[15]=b[2];j[15]=b[3];k[15]=b[4];l[15]='\0';
  }
  if(X[15]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[15]=c[0];g[15]=c[1];h[15]=c[2];j[15]=c[3];k[15]=c[4];l[15]='\0';
  }
  if(X[15]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[15]=d[0];g[15]=d[1];h[15]=d[2];j[15]=d[3];k[15]=d[4];l[15]='\0';
  }
  if(X[15]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[15]=e[0];g[15]=e[1];h[15]=e[2];j[15]=e[3];k[15]=e[4];l[15]='\0';
  }
  if(total==16)
   goto jump;
  printf("\n");
  if(X[16]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[16]=a[0];g[16]=a[1];h[16]=a[2];j[16]=a[3];k[16]=a[4];l[16]=a[5];
  }
  if(X[16]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[16]=b[0];g[16]=b[1];h[16]=b[2];j[16]=b[3];k[16]=b[4];l[16]='\0';
  }
  if(X[16]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[16]=c[0];g[16]=c[1];h[16]=c[2];j[16]=c[3];k[16]=c[4];l[16]='\0';
  }
  if(X[16]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[16]=d[0];g[16]=d[1];h[16]=d[2];j[16]=d[3];k[16]=d[4];l[16]='\0';
  }
  if(X[16]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[16]=e[0];g[16]=e[1];h[16]=e[2];j[16]=e[3];k[16]=e[4];l[16]='\0';
  }
  if(total==17)
   goto jump;
  printf("\n");
  if(X[17]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[17]=a[0];g[17]=a[1];h[17]=a[2];j[17]=a[3];k[17]=a[4];l[17]=a[5];
  }
  if(X[17]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[17]=b[0];g[17]=b[1];h[17]=b[2];j[17]=b[3];k[17]=b[4];l[17]='\0';
  }
  if(X[17]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[17]=c[0];g[17]=c[1];h[17]=c[2];j[17]=c[3];k[17]=c[4];l[17]='\0';
  }
  if(X[17]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[17]=d[0];g[17]=d[1];h[17]=d[2];j[17]=d[3];k[17]=d[4];l[17]='\0';
  }
  if(X[17]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[17]=e[0];g[17]=e[1];h[17]=e[2];j[17]=e[3];k[17]=e[4];l[17]='\0';
  }
  if(total==18)
   goto jump;
  printf("\n");
  if(X[18]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[18]=a[0];g[18]=a[1];h[18]=a[2];j[18]=a[3];k[18]=a[4];l[18]=a[5];
  }
  if(X[18]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[18]=b[0];g[18]=b[1];h[18]=b[2];j[18]=b[3];k[18]=b[4];l[18]='\0';
  }
  if(X[18]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[18]=c[0];g[18]=c[1];h[18]=c[2];j[18]=c[3];k[18]=c[4];l[18]='\0';
  }
  if(X[18]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[18]=d[0];g[18]=d[1];h[18]=d[2];j[18]=d[3];k[18]=d[4];l[18]='\0';
  }
  if(X[18]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[18]=e[0];g[18]=e[1];h[18]=e[2];j[18]=e[3];k[18]=e[4];l[18]='\0';
  }
  if(total==19)
   goto jump;
  printf("\n");
  if(X[19]==1){
   for(i=0;i<6;i++)
    printf("\t  %c",a[i]);
   f[19]=a[0];g[19]=a[1];h[19]=a[2];j[19]=a[3];k[19]=a[4];l[19]=a[5];
  }
  if(X[19]==2){
   for(i=0;i<5;i++)
    printf("\t  %c",b[i]);
   f[19]=b[0];g[19]=b[1];h[19]=b[2];j[19]=b[3];k[19]=b[4];l[19]='\0';
  }
  if(X[19]==3){
   for(i=0;i<5;i++)
    printf("\t  %c",c[i]);
   f[19]=c[0];g[19]=c[1];h[19]=c[2];j[19]=c[3];k[19]=c[4];l[19]='\0';
  }
  if(X[19]==4){
   for(i=0;i<5;i++)
    printf("\t  %c",d[i]);
   f[19]=d[0];g[19]=d[1];h[19]=d[2];j[19]=d[3];k[19]=d[4];l[19]='\0';
  }
  if(X[19]==5){
   for(i=0;i<5;i++)
    printf("\t  %c",e[i]);
   f[19]=e[0];g[19]=e[1];h[19]=e[2];j[19]=e[3];k[19]=e[4];l[19]='\0';
  }
  if(total==20)
    goto jump;
  jump:
  printf("\n\n Let's give it another shot, do the same as you does before.\n");
  for(i=0;i<total;i++){
   printf("\n Enter %d alphabet line number again: ",i+1);
   scanf("%d",&Y[i]);
  }
  clrscr();
  for(i=0;i<total;i++){
   if(Y[i]==1)
    printf("%c",f[i]);
   if(Y[i]==2)
    printf("%c",g[i]);
   if(Y[i]==3)
    printf("%c",h[i]);
   if(Y[i]==4)
    printf("%c",j[i]);
   if(Y[i]==5)
    printf("%c",k[i]);
   if(Y[i]==6)
    printf("%c",l[i]);
  }
  printf("\n\n\n Gotcha !!  Did I guess right ?\n Good Bye Compile your Day and Run ;)");
  printf("\n\n Do you want to Exit? Type(Y/N) : ");
  scanf(" %c",&ans);
  if(ans=='n'|| ans=='N')
     goto Start;
 return 0;
}