# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 11:48:59 by ibenhaim          #+#    #+#              #
#    Updated: 2023/11/09 15:03:06 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

NAME		=	sed

RM			=	rm -rf

# --- Directories ---

DIR_SRCS	=	sources/

DIR_INC		=	includes/

DIR_OBJS	=	.objs/

# ====================== PATHS ====================== #

SRCS		=	${DIR_SRCS}main.cpp 

INC			=	

OBJS		=	${patsubst %.cpp, ${DIR_OBJS}%.o, ${SRCS}}

# ====================== FLAGS ====================== #

CPP			=	c++ -std=c++98

CFLAGS		=	-Wall -Wextra -Werror -g3 -I ${DIR_INC}

# ====================== RULES ====================== #

all :	 		${NAME}

${DIR_OBJS}%.o: %.cpp ${INC}
				@mkdir -p ${shell dirname $@}
				${CPP} ${CFLAGS} -c $< -o $@

${NAME}:		${OBJS}
				${CPP} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				${RM} ${OBJS} ${DIR_OBJS}
				${RM} *.replace

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY :		all clean fclean re