# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 10:12:47 by momihamm          #+#    #+#              #
#    Updated: 2023/04/08 16:28:11 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server
NAME0 = client
CC = cc
FLAGS = -Wall -Werror -Wextra 
SFILES = server.c\
 		 utils.c

CFILES = client.c\
		 utils.c

SOBJ = $(SFILES:.c=.o)

COBJ = $(CFILES:.c=.o)

all : $(NAME) $(NAME0)

$(NAME) : $(SOBJ)
	$(CC) $(FLAGS) $(SFILES) -o $(NAME)
$(NAME0) : $(COBJ)
	$(CC) $(FLAGS) $(CFILES) -o $(NAME0)
#@clear
	@echo "                     				   ███▄ ▄███▓ ██▓ ███▄    █  ██▓▄▄▄█████▓ ▄▄▄       ██▓     ██ ▄█▀"
	@echo "                     				  ▓██▒▀█▀ ██▒▓██▒ ██ ▀█   █ ▓██▒▓  ██▒ ▓▒▒████▄    ▓██▒     ██▄█▒ "
	@echo "                     				  ▓██    ▓██░▒██▒▓██  ▀█ ██▒▒██▒▒ ▓██░ ▒░▒██  ▀█▄  ▒██░    ▓███▄░ "
	@echo "                     				  ▒██    ▒██ ░██░▓██▒  ▐▌██▒░██░░ ▓██▓ ░ ░██▄▄▄▄██ ▒██░    ▓██ █▄ "
	@echo "                     				  ▒██▒   ░██▒░██░▒██░   ▓██░░██░  ▒██▒ ░  ▓█   ▓██▒░██████▒▒██▒ █▄"
	@echo "                     				  ░ ▒░   ░  ░░▓  ░ ▒░   ▒ ▒ ░▓    ▒ ░░    ▒▒   ▓▒█░░ ▒░▓  ░▒ ▒▒ ▓▒"
	@echo "                     				  ░  ░      ░ ▒ ░░ ░░   ░ ▒░ ▒ ░    ░      ▒   ▒▒ ░░ ░ ▒  ░░ ░▒ ▒░"
	@echo "                     				  ░      ░    ▒ ░   ░   ░ ░  ▒ ░  ░        ░   ▒     ░ ░   ░ ░░ ░ "
	@echo "                     				         ░    ░           ░  ░                 ░  ░    ░  ░░  ░   "
	
	
clean : 
	@rm -f $(OBJ)
	
fclean : clean
	@rm -f $(NAME) $(NAME0)
	
re : fclean all

