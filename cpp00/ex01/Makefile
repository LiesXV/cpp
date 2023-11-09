# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 13:04:40 by ibenhaim          #+#    #+#              #
#    Updated: 2023/11/06 10:13:40 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Constants
NAME			=	phonebook
CPP				=	c++ -std=c++98
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -rf

# Sources folder
DIR_SRCS		=	sources/
DIR_HEADERS		=	includes/

# Sources files
SRCS			=	${DIR_SRCS}main.cpp			\
					${DIR_SRCS}PhoneBook.cpp	\
					${DIR_SRCS}Contact.cpp
					
HEADERS			=	${DIR_HEADERS}PhoneBook.hpp \
					${DIR_HEADERS}Contact.hpp

# Objects
DIR_OBJS		=	.objs/
OBJS			=	${patsubst %.cpp, ${DIR_OBJS}%.o, ${SRCS}}

# Rules
.PHONY :		all clean fclean re

all :	 		${NAME}

${DIR_OBJS}%.o: %.cpp	${HEADERS}
				@mkdir -p ${shell dirname $@}
				${CPP} ${CFLAGS} -c $< -o $@ -I ${DIR_HEADERS}

${NAME}:		${OBJS}
				$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				${RM} ${OBJS} ${DIR_OBJS}

fclean:			clean
				${RM} ${NAME}

re :			fclean all
