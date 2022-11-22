# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 15:27:59 by OrioPrisc         #+#    #+#              #
#    Updated: 2022/11/07 11:57:48 by OrioPrisc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
SRC = ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strnstr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_strncmp.c\
	ft_strrchr.c\
	ft_strchr.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_split.c\
	ft_itoa.c\
	ft_memchrnul.c\
	ft_strnchrnul.c\
	ft_strchrnul.c\
	ft_strnlen.c\
	ft_strcpy.c\
	ft_index.c


BONUS_SRC = ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c\
	ft_strncpy.c


SRC_FOLDER = ./

HEADERS_FOLDER = ./

OBJS = $(patsubst %.c,$(OBJ_FOLDER)%.o,$(SRC))

BONUS_OBJS = $(patsubst %.c,$(OBJ_FOLDER)%.o,$(BONUS_SRC))

OBJ_FOLDER = $(SRC_FOLDER)

CFLAGS = -Wall -Wextra -Werror -ggdb

all: $(NAME)
	
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

$(OBJ_FOLDER)%.o : $(SRC_FOLDER)%.c
	$(CC) -c $(CFLAGS) -I$(HEADERS_FOLDER) -fPIC $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so: $(OBJS) $(BONUS_OBJS)
	$(CC) -c -I. -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS_SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus so
.SUFFIXES:
MAKEFLAGS += --warn-undefined-variables
MAKEFLAGS += --no-builtin-rules
