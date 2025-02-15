#include<stdio.h>
int main(){
char str[25];
char c;
scanf("%s %c", str, &c);
int found = 0;
int i =0;
//printf("%c",c);
while(1){
  if(*(str+i+found) == c){
    found++;
    continue;
  }
  *(str+i) = *(str+found+i);
  //printf("%c", *(str+found+i));
  if(*(str+i+found) == '\0'){
    break;
  }
  i++;
}
printf("%s", str);
}