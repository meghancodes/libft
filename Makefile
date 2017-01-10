# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 07:40:39 by mwilliam          #+#    #+#              #
#    Updated: 2016/12/06 19:32:43 by mwilliam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memmove.c ft_strlcat.c ft_strstr.c ft_strlen.c \
ft_atoi.c ft_isspace.c ft_itoa.c ft_putendl.c ft_putendl_fd.c \
ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strnew.c \
ft_strsplit.c ft_bzero.c ft_memcpy.c ft_memset.c ft_strdup.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_lstadd.c ft_lstdel.c \
ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c \
ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memdel.c ft_putchar.c ft_putnbr.c \
ft_putstr.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
ft_strdel.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
ft_strnstr.c ft_strrchr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \

OBJS = $(SRCS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c -I.

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
