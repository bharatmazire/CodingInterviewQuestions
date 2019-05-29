/*
Implement an algorithm to determine if a string has all unique characters. What if you
can not use additional data structures?
*/

#include<stdio.h>
//#include<string.h>

int main()
{
  char str[100];
  int letter[26] = {0};

  printf("Enter string : ");
  scanf("%s",str);
  
  int i =0 ;
  int check = 0;
  while(str[i] != '\0')
  {
    if(letter[str[i] - 97] != 0)
    {
      printf("String contains duplicates !!");
      check = 1;
      break;
    }
    else
    {
      letter[str[i] -97] = 1;
    }
    i++;
  }
  
  if(check == 0)
    printf("String contains uniques !!");
  
  return(0);
}

