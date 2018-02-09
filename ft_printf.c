#include "ft_printf.h"
	
void		ft_error(char *str)
{
	ft_putstr(str);
}

char	*create_list_of_strings(char *str_arg, t_list **lptr)
{
	char		*str_proc;
	t_list		*new;
	int i;

	str_proc = ft_strchr(str_arg + 1, '%');
	if (str_proc)
	{
		i = ft_strlen(str_arg) - ft_strlen(str_proc);
		new = ft_lstnew(str_arg, (size_t)i);
		ft_list_push_back(lptr, new);
		str_arg = str_proc;
	}
	else
	{
		i = ft_strlen(str_arg);
		new = ft_lstnew(str_arg, (size_t)i);
		ft_list_push_back(lptr, new);
		str_arg = NULL;
	}
	return (str_arg);
}

t_list		*manage_string(char	*str_arg)
{
	t_list		*lptr;

	if (str_arg[ft_strlen(str_arg) - 1] == '%')
	{
		ft_error("se termina string cu %\n");
		return (0);
	}
	lptr = NULL;
	while (str_arg)
	{
		if (*str_arg == '%')
		{
			if (*(str_arg + 1) == '%')
				str_arg = create_list_of_strings(str_arg, &lptr) + 1;
			else
				str_arg = create_list_of_strings(str_arg, &lptr);
		}
		else
			str_arg = create_list_of_strings(str_arg, &lptr);
	}
	return (lptr);
}

int			ft_printf(const char *format, ...)
{
	va_list ap;
	char	*str_arg;
	t_list	*lptr;

	if (!format)
		return (0);
	
	str_arg = ft_strdup(format);
	lptr = manage_string(str_arg);
	
	while (lptr)
	{
		ft_putstr(lptr->content);
		write(1,"\n",1);
		lptr = lptr->next;
	}
	//va_start(ap, format);

	return(0);
	//return (ft_strlen(ptr_proc));
}

int main()
{
	ft_printf("%%%aaa%bbb%%ccc%\nd");
}
