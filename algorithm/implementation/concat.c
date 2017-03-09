#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

//using namespace std;

int main(){
 int i=0;
  char str[100];
  printf("enter string:: ");
 scanf("%s", &str);
  char c;
  int count=0;
  while (str[i])
  {
    c=str[i];
    /*if (isupper(c)) //c=tolower(c);
        count=count+1;*/
    //putchar (c);
    printf("%c\n", c);
    i++;
  }
 //cout<<(count+1);
return 0;

}
