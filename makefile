# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayayamad <ayayamad@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 12:41:12 by ayayamad          #+#    #+#              #
#    Updated: 2025/05/21 12:41:12 by ayayamad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       := libftprintf.a
CC         := cc
CFLAGS     := -Wall -Wextra -Werror
AR         := ar rcs
RM         := rm -f

# mandatory
SRCS := \
	ft_printf.c


OBJS := $(SRCS:.c=.o)

.PHONY: all  clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	$(MAKE) all
