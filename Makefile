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

SRC = ft_foo.c

SRC_FOLDER = srcs/

HEADERS_FOLDER = .

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
