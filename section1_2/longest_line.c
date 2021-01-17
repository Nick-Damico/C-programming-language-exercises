#include <stdio.h>
#define MAXLINE 1000 /* Maximum input line length */


int readline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
  int len;                /* current line length */
  int max;                /* max line length so far */
  char line[MAXLINE];     /* current line array */
  char longest[MAXLINE];  /* current longest line array */
  
  max = 0;
  while ((len = readline(line, MAXLINE)) > 0)
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }

  if (max > 0)
    printf("%s", longest);
  
  return 0;
}

/* read line into s[]; return length */
int readline(char s[], int lim)
{
  int i,c;

  for(i=0; i<lim-1 && (c = getchar()) !=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  
  return i;
}

/* Copy from array to the to array */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
