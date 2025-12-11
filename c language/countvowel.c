#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len,vowel=0;
    printf("enter string\n");
    fgets(str,100,stdin);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowel++;
        }
    }
    printf("THE NUMBER OF VOWEL IN STRING IS : %d",vowel);
    return 0;
}