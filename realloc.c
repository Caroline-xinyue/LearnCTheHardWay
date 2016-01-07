#include <stdio.h>
#include<stdlib.h>
 
 
int main()
{
    int len1, len2;
    char *buffer;
 
    char *s1 = "0 1 2 3 ";
    len1 = strlen(s1);
    printf("%s(%d)\n",s1,len1);
 
    len1 = len1 + 1; /* for \0 */
    buffer = (char *)malloc(len1 * sizeof(char));
    if(buffer == NULL)
    {
        printf("Out of memory!!!\n");
        exit(1);
    }
    strcpy(buffer,s1);
    printf("The buffer is: %s(%d)\n",buffer,strlen(buffer));
 
 
    char *s2 = "4 5 6 7 8 9";
    len2 = strlen(s2);
    printf("%s(%d)\n",s2,len2);
 
    buffer = (char *)realloc(buffer, (len1 + len2) * sizeof(char));
    if(buffer == NULL)
    {
        printf("Out of memory for the buffer!!!\n");
        exit(1);
    }
    strcat(buffer,s2);
 
    printf("The buffer is: %s(%d)\n",buffer,strlen(buffer));
 
    free(buffer);
 }