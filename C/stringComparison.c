#include<stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char str1[20];
    char str2[20];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    bool isEqual = true;

    int i=0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            isEqual = false;
            break;
        }
        i++;
    }
    if(isEqual == true){
        printf("Strings are equal");
    }else{
        printf("Strings are different");
    }
    
    return 0;
}