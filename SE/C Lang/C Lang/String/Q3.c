//3. Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i;
	//user inputs string
    printf("Enter a string : ");
    gets(str);
    printf("The individual characters reverse order are: ", str);
	//loop to reverse the string
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c ", str[i]);
    }
}
