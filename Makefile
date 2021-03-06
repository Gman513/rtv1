# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/04 07:37:46 by ghavenga          #+#    #+#              #
#    Updated: 2016/07/11 09:57:15 by ghavenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= rtv1

CC= gcc -o
CFLAGS= -Wall -Werror -Wextra
LIBFT= -L ./libft/ -lft

SRC=	main.c \
		checks.c \
		echo.c \
		env.c \

all: $(NAME)

$(NAME):
	@clear
	@echo "\x1b[31m\t-----Compiling Libft\x1b[0m"
	@make -C libft fclean
	@make -C libft
	@echo "\x1b[34m\t+++++Done Compiling Libft\x1b[0m"
	@echo "\x1b[31m\t-----Compiling $(NAME)\x1b[0m"
	$(CC) $(NAME) $(CFLAGS) $(SRC) $(LIBFT)
	@echo "\x1b[34m\t+++++Done Compiling $(NAME)\x1b[0m"
	@echo "\x1b[32m\t+++++Completed All Compiling\x1b[0m"

quick:
	@clear
	@echo "\x1b[31m\t-----Compiling $(NAME)\x1b[0m"
	@$(CC) $(NAME) $(CFLAGS) $(SRC) $(LIBFT)
	@echo "\x1b[32m\t+++++Done Compiling $(NAME)\x1b[0m"

clean:
	@rm $(NAME)
	@echo "\x1b[32m\t+++++Completed Clean\x1b[0m"

fclean: clean
	@make -C libft fclean
	@echo "\x1b[32m\t+++++Completed Full Clean\x1b[0m"

re: fclean all

me:
	@echo ${LOGNAME} > author

norm:
	@clear
	norminette $(SRC)
