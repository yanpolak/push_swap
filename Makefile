# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 21:52:50 by ymarival          #+#    #+#              #
#    Updated: 2023/02/04 17:34:52 by ymarival         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= 	arr_to_list.c atoi.c char_to_int.c check_duplicate.c checker.c error.c split.c free_split_map.c\
					matrixlength.c operation.c make_arr.c operation1.c sort.c sort1.c utils.c main.c \

OBJS			= $(SRCS:.c=.o)

NAME			= Push_swap

CC				= gcc

CFLAGS			= -Wall -Wextra -Werror 


RM				= rm -f


all:			$(NAME)

$(NAME):		$(OBJS)
				${CC} ${CFLAGS} -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re 
