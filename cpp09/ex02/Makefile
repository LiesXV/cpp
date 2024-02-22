# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 14:39:49 by ibenhaim          #+#    #+#              #
#    Updated: 2024/02/22 08:43:50 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PmergeMe

DIR_SRCS	=	sources/
DIR_INC		=	includes/

SRCS		=	${DIR_SRCS}main.cpp\
				${DIR_SRCS}PmergeDeque.cpp\
				${DIR_SRCS}PmergeVector.cpp\

INC			=	\
				${DIR_INC}PmergeMe.hpp\

DIR_OBJS	=	.objs/

OBJS 		=	${addprefix ${DIR_OBJS},${SRCS:.cpp=.o}}

CPP			=	c++ -std=c++98 -g3

FLAGS		=	-Wall -Wextra -Werror

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