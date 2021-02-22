# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbarros <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 14:41:52 by fbarros           #+#    #+#              #
#    Updated: 2021/02/22 15:40:11 by fbarros          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= *.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Werror -Wextra -g

NAME	= libft

.c.o:	
			cc ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			cc -o ${NAME} ${OBJS}

//bonus:	

all:		${NAME}

clean :		
			rm ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

//.PHONY:		all clean fclean re
