# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwautier <vwautier@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 16:08:55 by vwautier          #+#    #+#              #
#    Updated: 2025/02/24 00:12:34 by vwautier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Noms des executables
SERVER = serveur
CLIENT = client

# Sources
SERVER_SRC = server.c util.c
CLIENT_SRC = client.c util.c

# Libftprintf
PRINTF_DIR = ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

# Objects
SERVER_OBJ = $(SERVER_SRC:.c=.o)
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

all: $(PRINTF_LIB) $(SERVER) $(CLIENT)

# Compile printf lib
$(PRINTF_LIB):
	$(MAKE) -C $(PRINTF_DIR)

# Compile server
$(SERVER): $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(SERVER_OBJ) $(PRINTF_LIB) -o $(SERVER)

# Compile client
$(CLIENT): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(CLIENT_OBJ) $(PRINTF_LIB) -o $(CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ)
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(SERVER) $(CLIENT)
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re