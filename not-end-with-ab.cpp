#include<stdio.h>
#include<conio.h>
#define max 100
main()
{
 char str[max],f='a';
 int i;
 printf("enter the string to be checked: ");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  switch(f)
  {
   case 'a': if(str[i]=='a') f='b';
    else if(str[i]=='b') f='a';
   break;
   case 'b': if(str[i]=='a') f='b';
    else if(str[i]=='b') f='c';
   break;
   case 'c': if(str[i]=='a') f='b';
    else if(str[i]=='b') f='a';
   break;

  }
 }
 if(f=='b'||f=='a') printf("\nString is accepted as it reached the final state %c at the end.",f);
 else printf("\nString is not accepted as it reached %c which is not the final state.",f); 
}
