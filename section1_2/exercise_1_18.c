#include <stdio.h>
#define MAXLENGTH 1000

int readline(char line[]);
void sanitize_input(char cleaned[], char line[]);

int main(void)
{
  /* Program should:
   *  [√] Remove trailing blanks and tabs
   *  [ ] Delete blank lines entirely.
   *  */
  int len; /* length of current line */
  char line[MAXLENGTH]; /* current line input */
  char cleaned[MAXLENGTH]; /* current line sanitized of trailing whitespace */

  while ((len = readline(line) > 0))
    {
      sanitize_input(cleaned, line);
      printf("%s\n", cleaned);
    }
  return 0;
}

int readline(char l[])
{
  int i,c;

  for (i=0; i<MAXLENGTH-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    l[i] = c;

  if (c == '\n')
  {
    l[i] = c;
    ++i;
  }
  l[i] = '\0';
  return i;
}

/* Removes trailing whitespace from input */
void sanitize_input(char cln[], char lin[])
{

  /* Needs to detect the start of a whitespace,
   * Trailig is defined as whitespace without a valid character
   * following before the newline is detected.
   * */
  int i,s;
  i = s = 0;
  while ((cln[i] = lin[i]) != '\0')
  {
    if ((cln[i] == '\t' || cln[i] == ' ') && s == 0)
      s = i;
    if (cln[i] != '\t' && s != 0)
      s = 0;
    ++i;
  }
  if (s > 0)
    cln[s] = '\n';
}

