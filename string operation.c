#include<stdio.h>
#include<string.h>
int main(){
    
    // various string operation
    //1. strcat(): Appends a copy of the source string to the end of the destination string.
    
    char destination[50] = "hello";
    char source[50] = " world";
    strcat(destination , source);
    printf("strcat:%s\n",destination);
    
    //2. strcmp(): Compares two strings lexicographically.
    
    char str1[100] = "hello world";
    //char str1[100] = "heLlo world";
    char str2[100] = "hello world";
    int result = strcmp(str1,str2);
    printf("strcpm: result:%d\n",result);
    if (result == 0)
    puts("string are equal");
    else
    puts("string are not equal");
    
    //3.strcpy(): Copy one string to another.
    char des[] = "old news";
    char sou[] = "new news";
    strcpy(des,sou);
    printf("strcpy: %s\n",des);
    
    //4.strlen(): Gives you the length of the string. It doesn't count null character.
    char name[]= "Rohan khurana";
    int len = strlen(name);
    printf("strlen: %d\n",len);
    
    return 0;
}