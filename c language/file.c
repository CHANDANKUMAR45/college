#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("newText.txt","r");
//fprintf(fptr,"%c",'m');
//fprintf(fptr,"%c",'m');
char ch;
fscanf(fptr,"%c",&ch);
 printf("character = %c\n",ch);
 fscanf(fptr,"%c",&ch);
 printf("character = %c\n",ch);
 fscanf(fptr,"%c",&ch);
 printf("character = %c\n",ch);
 fscanf(fptr,"%c",&ch);
 printf("character = %c\n",ch);
 fscanf(fptr,"%c",&ch);
 printf("character = %c\n",ch);
//fprintf(fptr,"%c",'a');
//fprintf(fptr,"%c",'n');
//fprintf(fptr,"%c",'g');
//fprintf(fptr,"%c",'o');


    fclose(fptr);

    return 0;
}