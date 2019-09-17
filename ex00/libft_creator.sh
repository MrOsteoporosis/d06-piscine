gcc -c ft_putchar.c
gcc -c ft_swap.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c
gcc -c ft_putstr.c
ar rc libstr.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
ranlib libstr.a