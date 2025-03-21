# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 02:48:26 by smurayam          #+#    #+#              #
#    Updated: 2025/03/21 09:03:11 by smurayam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

#r: Add or replace object files in the archive.
#c: Create the archive if it doesn’t already exist.
#s: Create an index of symbols to speed up linking.
ARS = ar rcs

SRCS = ft_printf.c ft_printf_char.c  ft_printf_decimal.c  ft_printf_hex.c  ft_printf_percent.c  ft_printf_ptr.c  ft_printf_str.c  ft_printf_unsigned.c  ft_utoa.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(ARS) $(NAME) $(OBJS)

#bonus: $(BONUS_FLAG)

#$(BONUS_FLAG) : $(BONUS_OBJS)
#	$(ARS) $(NAME) $(BONUS_OBJS)
#	@touch $(BONUS_FLAG)

# Compile each .c file into its corresponding .o file.
# %: matches any string (used for pattern matching).
# $<: the first dependency (source .c file).
# $@: the target file (.o file to be created).
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
Makefileを使用している場合は、すべての必要なソースファイルが含まれていることを確認する。
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	rm -f $(BONUS_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all bonus clean fclean re% 