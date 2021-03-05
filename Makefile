# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbarros <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 14:41:52 by fbarros           #+#    #+#              #
#    Updated: 2021/03/05 14:34:09 by fbarros          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_split.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_substr.c \
	  ft_tolower.c \
	  ft_toupper.c

OBJS	= ${SRCS:.c=.o}

BONUS	= ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \
	  ft_lstdelone.c

BONUS_OBJS = ${BONUS:.c=.o}

CFLAGS	= -Wall -Werror -Wextra -g

NAME	= libft.a

HEADER = libft.h

CC	= gcc

AR	= ar rc

INDEX	= ranlib

RM	= rm -f

all:		${NAME}

.c.o:	
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I.

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
		${INDEX} ${NAME}

bonus:		${NAME} ${BONUS_OBJS}
		${AR} ${NAME} ${OBJS} ${BONUS_OBJS}
		${INDEX} ${NAME}

clean :		
		${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

rebonus :	fclean bonus

.PHONY:		all clean fclean re bonus
