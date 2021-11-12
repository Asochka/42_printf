#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
}	t_print;

int		ft_printf(const char *format, ...);
int		ft_eval_format(t_print *tab, const char *format, int i);

int		ft_print_char(t_print *tab);
int		ft_print_int(t_print *tab);
int		ft_print_lowhex(t_print *tab);
int		ft_print_point(t_print *tab);
int		ft_print_str(t_print *tab);
int		ft_print_unint(t_print *tab);
int		ft_print_upphex(t_print *tab);

void	ft_putnbr(int n, int *ret);
void	ft_putnbr_un(unsigned int n, int *ret);

t_print	*ft_initialise_tab(t_print *tab);

#endif
