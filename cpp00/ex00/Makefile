# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 13:04:40 by ibenhaim          #+#    #+#              #
#    Updated: 2023/11/04 15:12:34 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Constants
NAME		=	megaphone
CPP			=	c++ -std=c++98
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

# Directories path
DIR_SRCS	=	sources/

# Sources files
SRCS		=	${DIR_SRCS}megaphone.cpp

# Objects
DIR_OBJS	=	.objs/
OBJS		=	${patsubst %.cpp, ${DIR_OBJS}%.o, ${SRCS}}

# Rules
.PHONY :		all clean fclean re

all :	 		${NAME}

${DIR_OBJS}%.o: %.cpp
				@mkdir -p ${shell dirname $@}
				${CPP} ${CFLAGS} -c $< -o $@

${NAME}:		${OBJS}
				$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				${RM} ${OBJS} ${DIR_OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all
