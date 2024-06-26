# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhchen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 18:53:52 by zhchen            #+#    #+#              #
#    Updated: 2024/03/17 19:05:09 by zhchen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c \
		ft_putendl_fd.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
		ft_isascii.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		ft_strdup.c ft_calloc.c ft_memcpy.c ft_memmove.c ft_memcmp.c \
		ft_memchr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_strnstr.c ft_striteri.c

OBJS = ${SRCS:%.c=%.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
RESET = \033[0m

all:	${NAME}
		@echo "$(RED)------done------$(RESET)"

$(NAME): ${OBJS}
		@ar rcs ${NAME} ${OBJS}

%.o:%.c libft.h
		@echo "Compiling$(GREEN)" $< "$(RESET)"
		@${CC} ${CFLAGS} -c $< -o $@

clean:
		@echo "$(YELLOW)Cleaned$(RESET)"
		@${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		@${RM} ${NAME}

re:		fclean all
