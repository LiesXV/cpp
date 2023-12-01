# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 12:26:13 by ibenhaim          #+#    #+#              #
#    Updated: 2023/12/01 15:33:36 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = Animal

DIR_INC		=	includes/
DIR_SRCS	=	sources/

SRCS		=	${DIR_SRCS}main.cpp\
				${DIR_SRCS}Animal.cpp\
				${DIR_SRCS}Cat.cpp\
				${DIR_SRCS}Dog.cpp\
				${DIR_SRCS}WrongAnimal.cpp\
				${DIR_SRCS}WrongCat.cpp\
				${DIR_SRCS}Brain.cpp

INC			=	${DIR_INC}Animal.hpp\
				${DIR_INC}Cat.hpp\
				${DIR_INC}Dog.hpp\
				${DIR_INC}WrongAnimal.hpp\
				${DIR_INC}WrongCat.hpp\
				${DIR_INC}Brain.hpp

DIR_OBJS	=	.objs/

OBJS 		=	${addprefix ${DIR_OBJS},${SRCS:.cpp=.o}}

CPP			=	c++ -std=c++98 -g3 -fsanitize=address 

FLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf
# ====================== RULES ====================== #
# ---- Compiled rules ---- #
all:			${NAME}

${NAME}:		${OBJS}
				${CPP} ${FLAGS} ${OBJS} -o ${NAME}

${DIR_OBJS}%.o: 	%.cpp ${INC}
					@mkdir -p ${shell dirname $@}
					${CPP} ${FLAGS} -c $< -o $@ -I ${DIR_INC}

# ---- Usual Rules ---- #
clean:
				${RM} ${OBJS} ${DIR_OBJS}
				${RM} log

fclean: 		clean
				${RM} ${NAME}

re:				fclean ${NAME}

.PHONY:			all clean fclean re