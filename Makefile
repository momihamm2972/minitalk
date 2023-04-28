# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 10:12:47 by momihamm          #+#    #+#              #
#    Updated: 2023/04/28 19:42:23 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server
NAME0 = client
NAMEB = server_bonus
NAMEB0 = client_bonus
CC = cc
FLAGS = -Wall -Werror -Wextra 
SFILES = server.c\
 		 utils.c

CFILES = client.c\
		 utils.c

SB_FILES = server_bonus.c\
		   utils.c

CB_FILES = client_bonus.c\
		   utils.c

SOBJ = $(SFILES:.c=.o)

COBJ = $(CFILES:.c=.o)

SBOBJ = $(SB_FILES:.c=.o)

CBOBJ = $(CB_FILES:.c=.o)

all : $(NAME) $(NAME0)

%.o : %.c minitalk.h
	$(CC) $(FLAGS) -c $<

$(NAME) : $(SOBJ)
	$(CC) $(FLAGS) $(SFILES) -o $(NAME)
$(NAME0) : $(COBJ)
	$(CC) $(FLAGS) $(CFILES) -o $(NAME0)
	@clear
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
	@rm -f $(SOBJ) $(COBJ)
	
fclean : clean
	@rm -f $(NAME) $(NAME0)
	

bonus : $(NAMEB) $(NAMEB0)

$(NAMEB) : $(SBOBJ)
	$(CC) $(FLAGS) $(SBOBJ) -o $(NAMEB)
$(NAMEB0) : $(CBOBJ)
	$(CC) $(FLAGS) $(CBOBJ) -o $(NAMEB0)

re : fclean all 

clean_bonus :
	@rm -f $(SBOBJ) $(CBOBJ)

fclean_bonus : clean_bonus
	@rm -f $(NAMEB) $(NAMEB0)

re_bonus : fclean_bonus bonus