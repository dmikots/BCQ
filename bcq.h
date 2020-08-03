#ifndef BSQ_H
# define BSQ_H

# define BUF_SIZE 4096
# define LEN(arr) ((int) (sizeof (arr) / sizeof (arr) [0]))
# include "stdio.h"
# include "unistd.h"
# include "stdlib.h"
# include "fcntl.h"

void	ft_putstr(char *str);
char	*ft_strdup(char *src);
int		open_file(char *file);
void    print_tab(char **tab, int i);
char	**read_file(char *file);
int		*convert_char_to_int(char *arr);
int		**get_int_array(char **tab, int x);
void	print_int_tab(int **tab);
int		main(int argc, char **argv);

#endif

