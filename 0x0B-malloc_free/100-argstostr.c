#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program.
* @ac: arguments count
* @av: arguments vector
*
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
  char *str, *t;
  int a, b, c, fbi = 0;

  if (ac == 0 || av == NULL)
     return (NULL);

  for (a = 0; a < ac; a++)
  {
     t = av[a];
     b = 0;

     while (t[b++])
        fbi++;
     fbi++;
  }

  str = (char *)malloc(sizeof(char) * (fbi + 1));
  if (str == NULL)
     return (NULL);

  for (a = 0, b = 0; a < ac && b < fbi; a++)
  {
     t = av[a];
     c = 0;

     while (t[c])
     {
        str[b] = t[c];
        c++;
        b++;
     }
     str[b++] = '\n';
  }
  str[b] = '\0';

  return (str);
}
