# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:10:19 by ibenhaim          #+#    #+#              #
#    Updated: 2023/12/07 15:59:46 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Bureaucrat

DIR_SRCS	=	sources/
DIR_INC		=	includes/

SRCS		=	${DIR_SRCS}main.cpp\
				${DIR_SRCS}Bureaucrat.cpp\
				${DIR_SRCS}AForm.cpp\
				${DIR_SRCS}ShrubberyCreationForm.cpp\
				${DIR_SRCS}RobotomyRequestForm.cpp\
				${DIR_SRCS}PresidentialPardonForm.cpp\

INC			=	${DIR_INC}Bureaucrat.hpp\
				${DIR_INC}Includes.hpp\
				${DIR_INC}AForm.hpp\
				${DIR_INC}ShrubberyCreationForm.hpp\
				${DIR_INC}RobotomyRequestForm.hpp\
				${DIR_INC}PresidentialPardonForm.hpp\

DIR_OBJS	=	.objs/

OBJS 		=	${addprefix ${DIR_OBJS},${SRCS:.cpp=.o}}

CPP			=	c++ -std=c++98

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
				${RM} *_shrubbery

fclean: 		clean
				${RM} ${NAME}

re:				fclean ${NAME}

.PHONY:			all clean fclean re