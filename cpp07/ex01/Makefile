# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 12:52:10 by ibenhaim          #+#    #+#              #
#    Updated: 2024/01/04 15:45:29 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	iter

DIR_SRCS	=	sources/
DIR_INC		=	includes/

SRCS		=	${DIR_SRCS}main.cpp\

INC			=	${DIR_INC}iter.hpp\

DIR_OBJS	=	.objs/

OBJS 		=	${addprefix ${DIR_OBJS},${SRCS:.cpp=.o}}

CPP			=	c++ -std=c++98

FLAGS		=	-Wall -Wextra -Werror -g -fsanitize=address

RM			=	rm -rf

all:			${NAME}

${NAME}:		${OBJS}
				${CPP} ${FLAGS} ${OBJS} -o ${NAME}

${DIR_OBJS}%.o: 	%.cpp ${INC}
					@mkdir -p ${shell dirname $@}
					${CPP} ${FLAGS} -c $< -o $@ -I ${DIR_INC}

clean:
				${RM} ${OBJS} ${DIR_OBJS}

fclean: 		clean
				${RM} ${NAME}

re:				fclean ${NAME}

.PHONY:			all clean fclean re