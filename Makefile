# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damachad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 10:57:36 by damachad          #+#    #+#              #
#    Updated: 2023/04/27 13:10:24 by damachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
      ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
      ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_striteri.c \
      ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
      ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
      ft_strmapi.c ft_split.c

OBJ = $(SRC:.c=.o)

BNS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	  ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c

BNS_OBJ = $(BNS_SRC:.c=.o)

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BNS_OBJ) $(OBJ)
	ar rcs $(NAME) $(OBJ) $(BNS_OBJ)

.PHONY: all clean fclean re bonus
