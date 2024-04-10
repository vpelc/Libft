# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 11:09:54 by vpelc             #+#    #+#              #
#    Updated: 2024/04/08 11:30:09 by vpelc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

AR = ar rc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SOURCES = $(wildcard *.c) 

OBJECTS = ${SOURCES:.c=.o}

.c.o:
		${CC} ${CFLAGS} -I libft.h -c $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
		${AR} ${NAME} ${OBJECTS}

all:	${NAME}

clean:
		${RM} ${OBJECTS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean re