#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
    char buff[100];
    write(1,"Enter the text to be printed\n",30);
    fgets(buff, 100, stdin);
    write(1, buff, strlen(buff));
    return 0;
}