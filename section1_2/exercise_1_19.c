#include <stdio.h>
#define MAXLINE 1000

int mgetline(char line[],int lim);
int reverse(char line[],char reverse[]);

int main(void)
{
  /* Reverse the input */
  int len;
  char line[MAXLINE];
  char rev_line[MAXLINE];

  while((len = mgetline(line, MAXLINE))>0)
  {
    reverse(line, rev_line);
    printf("%s", rev_line);
  }
    
  return 0;
}

int mgetline(char s[],int lim)
{
  int i,c;

  for(i=0; i<lim-1 && (c=getchar()) && c != EOF && c != '\n'; ++i)
    s[i] = c;
  
  if(c == '\n') 
  {
    s[i] = c;
    ++i;
  }
  c = '\0';
  return i;
}

/* reverses the passed in array */
int reverse(char s[],char r[])
{
  int i,j,len;

  for(j=0; s[j] != '\n';++j)
    ;
  --j;
  len = j;

  for(i=0; i <= len; ++i)
  {
    r[i] = s[j];
    --j;
  }
  r[i] = '\n';
  ++i;
  r[i] = '\0';
  return 0;
}
