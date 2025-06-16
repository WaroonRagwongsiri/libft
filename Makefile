# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/15 18:03:04 by marvin            #+#    #+#              #
#    Updated: 2025/06/15 18:03:04 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=		libft.a

CC := 		cc
CFLAG := 	-Wall -Wextra -Werror -g3 -c

SRCS := 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
			ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
			ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
			ft_atoi.c
OBJS :=		$(SRCS:%.c=%.o)
# INC_DIR := includes/

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	ar rcs -o $@ $^

$(OBJS) : %.o : %.c
	$(CC) $(CFLAG) $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re