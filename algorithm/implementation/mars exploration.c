#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){

char str1[100]="SOS", str2[100]="SOS";
int size=0, i=0, j=0, repeat, error=0, count=0;
//printf("enter the string: ");
char* recieved_signal = (char *)malloc(10240 * sizeof(char));
scanf("%s",recieved_signal);


char c, d;
while(recieved_signal[i])
{
    c=recieved_signal[i];
    size=size+1;
    i++;
}
//printf("size of recieved signal: %d\n", size);

repeat = size/3;
//char* expected_signal = (char *)malloc(10240 * sizeof(char));
while(repeat>1){
    strcat(str1, str2);
    repeat=repeat-1;

}

//printf("expected signal: %s\n", str1);
//printf("recieved signal: %s\n", recieved_signal);


for(i=0;i<size;i++)
{
    c=str1[i];
    d=recieved_signal[i];
    if(c!=d)
    {
        count=count+1;
    }

}
printf("%d", count);



}
