# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 17:30:25 by zgtaib            #+#    #+#              #
#    Updated: 2023/11/16 18:34:12 by zgtaib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalnum.c \
		ft_isdigit.c \
		ft_memmove.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strncmp.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_tolower.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_striteri.c
OBJ  = $(SRC:.c=.o)
SRCB = ft_lstnew.c	
OBJB = $(SRCB:.c=.o)

bonus: $(OBJB)

all: $(NAME)

$(NAME): $(OBJ) $(OBJB)
	ar rc $@ $^

# $(NAME): $(OBJB)
# 	ar rc $@ $^

%.o: %.c libft.a
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all
