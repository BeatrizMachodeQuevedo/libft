# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 15:16:30 by bemacho-          #+#    #+#              #
#    Updated: 2024/04/15 13:05:54 by bemacho-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES = ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_strlen.c \
			 ft_toupper.c \
			 ft_tolower.c \
			 ft_memset.c \
			 ft_bzero.c\
			 ft_memcpy.c\
			 ft_memmove.c\
			 ft_strchr.c\
			 ft_strrchr.c\
			 ft_strlcpy.c\
			 ft_strncmp.c\
			 ft_strlcat.c\
			 ft_memcmp.c\
			 ft_memchr.c\
			 ft_atoi.c\

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(MY_OBJECTS)
		$(AR) rcs $(NAME) $(MY_OBJECTS)

clean: -Rf $(MY_OBJECTS)

fclean: clean
	-f $(NAME)

re: fclean all
# Le dice al make que estos nombre no son archivos
.PHONY: all clean fclean re
