# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 15:28:47 by ablanco-          #+#    #+#              #
#    Updated: 2022/07/15 13:14:19 by ablanco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c  ft_strlcpy.c \
		  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}


${NAME}:	${OBJS}
			@ar -rc ${NAME} ${OBJS}

clean:
		@${RM} ${OBJS}
		@echo "Borrando objetos"

fclean:	clean
		${RM} ${NAME}

re:	fclean all
		
.PHONY:	all clean fclean re
