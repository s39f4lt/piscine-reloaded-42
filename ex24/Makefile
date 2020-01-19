# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idunaver <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 16:11:43 by idunaver          #+#    #+#              #
#    Updated: 2018/11/23 17:28:36 by idunaver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = srcs/*.c

INCLUDE = includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INCLUDE)
	ar rc $(NAME).a *.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME).a
re: fclean all
