# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 15:28:47 by ablanco-          #+#    #+#              #
#    Updated: 2022/06/24 16:15:17 by ablanco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		@echo "Creando objetos"

${NAME}:	${OBJS}
			@ar -rc ${NAME} ${OBJS}

clean:
		@${RM} ${OBJS}
		@echo "Borrando objetos"

fclean:	clean
		${RM} ${NAME}

re:	fclean all
		
.PHONY:	all clean fclean re
