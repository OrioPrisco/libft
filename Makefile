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

SRC = ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\


SRC_FOLDER = ./

HEADERS_FOLDER = ./

OBJS = $(patsubst %.c,$(OBJ_FOLDER)%.o,$(SRC))

OBJ_FOLDER = $(SRC_FOLDER)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(ONJECTS)
	ranlib $(NAME)

$(OBJ_FOLDER)%.o : $(SRC_FOLDER)%.c
	gcc -c $(CFLAGS) -I$(HEADERS_FOLDER) $< -o $@

clean:
ifneq ($(strip $(foreach f,$(OBJS),$(wildcard $(f)))),)
	rm -f $(strip $(foreach f,$(OBJS),$(wildcard $(f))))
endif

fclean: clean
ifneq ($(wildcard $(NAME)),)
	rm $(NAME)
endif

re: fclean all

.PHONY: all clean fclean re
