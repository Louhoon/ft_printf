# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: marvin <marvin@student.42.fr>                +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/15 10:13:56 by lvoisin-      #+#    #+#                  #
#    Updated: 2023/01/20 14:22:11 by lvoisin-      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
					ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c \
					ft_substr.c ft_strjoin.c ft_strtrim.c \
					ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_itoa.c \
					ft_strmapi.c ft_split.c ft_putstr.c ft_unputnbr_fd.c
					
OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstnew.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= @gcc
RM				= @rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

ifdef WITH_BONUS
REG_OBJS = $(OBJS) $(BONUS_OBJS)
else
REG_OBJS = $(OBJS)
endif


all:			$(NAME)
				

$(NAME):		$(REG_OBJS)
				@ar -crs $(NAME) $(REG_OBJS)
				@echo	✅Done!

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)
				@echo	🧼Cleaned!

re:				fclean $(NAME)

bonus:
				@make WITH_BONUS=1 all

.PHONY:			all clean fclean re bonus