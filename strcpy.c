#include<stdio.h> 
char* strcpy(char*,char*); 
void main() 
{ 
 char str1[5]="ABC"; 
 char str2[5]; 
 strcpy(str2,str1); 
 printf("%s", strcpy(str2,str1)); 
 //printf("%s",str2);
} 
char* strcpy(char* str2,char* str1) 
{ 
 int i=0; 
 while(str1[i]!='\0') 
 { 
  str2[i]=str1[i];
  i++; 
    } 
 str2[i]='\0'; 
 return str2; 
}
