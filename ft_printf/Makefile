# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lvoisin- <lvoisin-@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/07 19:40:41 by lvoisin-      #+#    #+#                  #
#    Updated: 2023/01/20 18:25:55 by lvoisin-      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_print_utils.c

CC = @gcc
RM = @rm -f
CFLAGS += -Wall -Werror -Wextra -g3 -I./libft
NAME = libftprintf.a
LIBFT = libft

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			@$(MAKE) -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@ar -src $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)
		@$(MAKE) clean -C $(LIBFT)

fclean:	clean 
		$(RM) $(NAME)
		$(RM) $(LIBFT)/libft.a
		@echo 🧼Cleaned

re:
		fclean $(NAME)

run:
		@gcc $(CFLAGS) libft/libft.a *.c && ./a.out

.PHONY:	all clean fclean re