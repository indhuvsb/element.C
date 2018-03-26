#include <stdio.h>
int main()
{
   char text[100], substring[100];
   int position;
 
   printf("Enter some text\n");
   gets(text);
 
   printf("Enter a string to insert\n");
   gets(substring);
 
   printf("Enter the position to insert\n");
   scanf("%d", &position);
 
   insert_substring(text, substring, position);
 
   printf("%s\n",text);
 
   return 0;
}
