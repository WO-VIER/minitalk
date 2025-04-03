# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vwautier <vwautier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 16:08:55 by vwautier          #+#    #+#              #
#    Updated: 2024/12/06 12:23:07 by vwautier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

# Fichiers source normaux
SRCS = 		ft_printf.c \
			util.c		\
			util2.c
#BONUS_SRCS = 		

OBJS = $(SRCS:.c=.o)
#BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Règle par défaut
all: $(NAME)

# Règle pour créer la bibliothèque statique
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Règle pour compiler les fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Règle pour nettoyer tout (fichiers objets et bibliothèque)
fclean: clean
	rm -f $(NAME)

# Règle pour recompiler tout
re: fclean all

# Règle pour compiler les fichiers bonus
#bonus: $(OBJS) $(BONUS_OBJS)
#ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Indique que ces règles ne sont pas des fichiers
.PHONY: all clean fclean re 