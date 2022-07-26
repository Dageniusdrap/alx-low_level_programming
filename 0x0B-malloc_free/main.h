#ifndef MAIN_H
#define MAIN_H

#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * File: MAIN.H
 * Auth: DRADRIGA PATRICK
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0A-malloc_free directory.
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
