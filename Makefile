# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 17:30:25 by zgtaib            #+#    #+#              #
#    Updated: 2023/11/27 14:57:14 by zgtaib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
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
SRCB = ft_lstnew_bonus.c \
		 ft_lstadd_front_bonus.c \
		 ft_lstsize_bonus.c \
		 ft_lstlast_bonus.c \
		 ft_lstadd_back_bonus.c \
		 ft_lstdelone_bonus.c \
		 ft_lstclear_bonus.c \
		 ft_lstiter_bonus.c \
		 ft_lstmap_bonus.c
OBJ  = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $@ $^

bonus: $(OBJB)
	ar rc $(NAME) $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

