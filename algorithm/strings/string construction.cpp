#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i=0,j=0,count=0;
char str1[100],str2[20],str3[20];
clrscr();
printf(“Enter the text: “);
gets(str1);

printf(“Enter word to count: “);
gets(str2);

while(str1[i]!=”)
{
while(str1[i]!=’ ‘&&str1[i]!=”) //copying the word from the text to a new string
str3[j++]=str1[i++];

str3[j]=”; //assigning null character at the end of string
j=0;

if((strcmpi(str2,str3))==0) //comparing the given word with the copied word
count++;

if(str1[i]==”)
break;
else
i++;
}

printf(“No. of words are %d”,count);
getch();
}
