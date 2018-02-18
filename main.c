//
//  main.c
//  cPointers
//
//  Created by Geraldine Marin-Zamora.
//

#include <stdio.h>
int mystrcmp(char *s, char *t);
void mystrcat(char *dest, char *source);
void mystrcpy(char *s, char *dest);

/* main: loop to print out command line arguments */
int main(int argc, const char * argv[])
{
    int i;
    char *pname = "Geraldine";
    
    for (i = 0; i < argc; i++)
    {
        if(mystrcmp(argv[i], pname)==0)
        {
            //printf("%s%s\n","Hello ", argv[i]);
            char arr[30] = "";
            char *pArray= arr;
            char *pHello = "Hello, ";
            mystrcpy(pHello, pArray);
            mystrcat(pArray, pname);
            printf("%s\n",pArray);
        }
        else
        {
            printf("%s\n",argv[i]);
        }
    }
    printf("%s\n", "IntArray:");
    
    int arr[10];
    for(i=0; i<10; i++)
    {
        arr[i] = i*i;
        printf("%d\n", arr[i]);
    }
}

int mystrcmp(char *s, char *t)
{/* srtcmp: return <0 if s < t, 0 if s==t, >0 if s>t*/
    for(; *s == *t; s++, t++) /* ++ is post fix */
        if (*s == '\0')
            return 0;
    return *s - *t;
}

void mystrcat(char *dest, char *source)
{
    while (*dest)
        dest++;
    while ((*dest++ = *source++));
}

void mystrcpy(char *s, char *dest)
{
    while ((*dest++ = *s++) != '\0');
}
