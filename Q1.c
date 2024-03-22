/*Write a program to read a file character by character and display its content on screen.*/

# include<stdio.h>
# include<string.h>
int main()
{
char str [20];
FILE *fp=fopen("sample2.text","w");

do
{
scanf("%s",str);
fputs(str,fp);
} 
while(strcmp(str,"kranti"));
fclose(fp);
printf ("data done");
return 0;
}


