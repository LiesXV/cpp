# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 13:23:09 by lciullo           #+#    #+#              #
#    Updated: 2023/12/03 17:57:00 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ====================== VARIABLES ====================== #

NAME		=	Materia

RM			=	rm -rf

# --- Directories ---

DIR_SRCS	=	sources/

DIR_INC		=	includes/

DIR_OBJS	=	.objs/

# ====================== PATHS ====================== #

SRCS		=	${DIR_SRCS}main.cpp \
				${DIR_SRCS}Character.cpp \
				${DIR_SRCS}AMateria.cpp \
				${DIR_SRCS}Ice.cpp \
				${DIR_SRCS}Cure.cpp \
				${DIR_SRCS}MateriaSource.cpp \


INC			=	${DIR_INC}Includes.hpp \
				${DIR_INC}AMateria.hpp \
				${DIR_INC}ICharacter.hpp \
				${DIR_INC}Character.hpp \
				${DIR_INC}Ice.hpp \
				${DIR_INC}Cure.hpp \
				${DIR_INC}IMateriaSource.hpp \
				${DIR_INC}MateriaSource.hpp \


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

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY :		all clean fclean re