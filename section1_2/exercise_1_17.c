#include <stdio.h>
#define MAXLENGTH 1000 

int readline(char line[]);

int main(void)
{
  /* Program should print all input
   * lines that exceed 80 characters in length only
   * */
  int len;              /* length of current input line */
  char line[MAXLENGTH]; /* current input line */

  while ((len = readline(line)) > 0)
    if (len > 80)
      printf("%s\n", line);
   
  printf("\n");
  return 0;
}

/* Reads line into l; returns its length */
int readline(char l[])
{

  int i,c;

  for (i=0; i<MAXLENGTH - 1 && (c = getchar()) != EOF && c!='\n'; ++i)
    l[i] = c;

  if (i == '\n')
  {
    l[i] = '\n';
    ++i;
  }
  l[i] = '\0';
  return i;
}
