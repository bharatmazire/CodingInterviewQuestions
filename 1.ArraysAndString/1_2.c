/*
Write code to reverse a C-Style String. (C-String means that “abcd” is represented as
five characters, including the null character.)
*/


#include<stdio.h>
#include<string.h>

int main()
{
  char str1[10];
  char str2[10];

  printf("Enter string to reverse : ");
  scanf("%s",str1);
  printf("\nEntered strnig is : %s\n",str1);

  int count = 0;
  while(str1[count] != '\0')
  {
    count++;
  }
  printf("count is : %d",count);
  int i = 0;
  while(count >= 0)
  {
    str2[i] = str1[count - 1];
    count --;
    i++;
  }
  str2[i] = '\0';

  printf("\nreversed string is : %s\n",str2);

  return(0);
}
