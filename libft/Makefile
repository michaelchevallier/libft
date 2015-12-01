# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchevall <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 16:28:30 by mchevall          #+#    #+#              #
#    Updated: 2015/11/30 19:50:27 by mchevall         ###   ########.fr        #
#    Updated: 2015/11/26 18:47:36 by mchevall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c\
ft_strncat.c ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strncmp.c\
ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_putchar.c ft_putstr.c\
ft_putendl.c ft_putnbr.c ft_itoa.c ft_memalloc.c ft_memdel.c ft_strclr.c\
ft_strdel.c ft_strnew.c ft_striteri.c ft_striter.c ft_putstr_fd.c\
ft_putendl_fd.c ft_putchar_fd.c ft_putnbr_fd.c

SRCO = $(SRC:.c=.o)
HEADERS = .
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

re: fclean all

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME): $(SRCO)
	ar rc $@ $^
	ranlib $@

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

.PHONY: re clean fclean all
