#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#define MAX 100
int countSpaces(char *);
int main()
{
    char *line;
    int spaces;
    size_t MAX=100;

    line=(char *)malloc(MAX*sizeof(char));
    if(line==NULL){
        printf("error in line allocation!\n");
        exit(0);
    }
    printf("You type a string and I count the spaces: \n");
    getline(&line,&MAX,stdin);

    //gets(line);
    spaces=countSpaces(line);
    printf("There are %d spaces in your sentence.",spaces-1);
    return 0;
}
int countSpaces(char *line){

    if(*line=='\0')
        return 0;
     if(isspace(*line))
            return 1+countSpaces(line+1);
     else
        return 0+countSpaces(line+1);
}

