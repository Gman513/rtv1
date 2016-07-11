# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/04 07:37:46 by ghavenga          #+#    #+#              #
#    Updated: 2016/07/08 10:33:32 by ghavenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= minishell

CC= gcc -o
CFLAGS= -Wall -Werror -Wextra
LIBFT= -L ./libft/ -lft

MS_SRC=	main.c \
		checks.c \
		echo.c \
		env.c \



all: $(NAME)

$(NAME):
	@clear
	@echo "\x1b[31mCompiling Libft\x1b[0m"
	@echo ".	.	.	"
	@make -C libft fclean
	@make -C libft
	@echo "\x1b[34mDone Compiling Libft\x1b[0m"
	@echo ".	.	.	"
	@echo "\x1b[31mCompiling $(NAME)\x1b[0m"
	@echo ".	.	.	"
	$(CC) $(NAME) $(CFLAGS) $(MS_SRC) $(LIBFT)
	@echo "\x1b[34mDone Compiling $(NAME)\x1b[0m"
	@echo ".	.	.	"
	@echo "\x1b[32mCompleted All Compiling\x1b[0m"

quick:
	@clear
	@echo "\x1b[31mCompiling $(NAME)\x1b[0m"
	@echo ".	.	.	"
	@$(CC) $(NAME) $(CFLAGS) $(MS_SRC) $(LIBFT)
	@echo "\x1b[32mDone Compiling $(NAME)\x1b[0m"

clean:
	@rm $(NAME)
	@echo "\x1b[32mCompleted Clean\x1b[0m"

fclean: clean
	@make -C libft fclean
	@echo "\x1b[32mCompleted Full Clean\x1b[0m"

re: fclean all

me:
	@echo ${LOGNAME} > author

norm:
	norminette $(MS_SRC)
