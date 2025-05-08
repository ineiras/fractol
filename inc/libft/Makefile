# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 16:10:56 by ineiras-          #+#    #+#              #
#    Updated: 2025/01/21 12:04:01 by ineiras-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS_LIBFT = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
    ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
	ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
    ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_PRINTF = ft_printf.c ft_print_char.c ft_print_number.c ft_print_string.c \
      ft_print_unsigned_number.c ft_print_hexa.c ft_print_ptr.c

BONUS_SRCS_LIBFT = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c\
		ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJS_LIBFT = $(SRCS_LIBFT:.c=.o)

OBJS_PRINTF = $(SRCS_PRINTF:.c=.o)

BONUS_OBJS = $(BONUS_SRCS_LIBFT:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_LIBFT) $(OBJS_PRINTF) Makefile libft.h
	@ar rc $(NAME) $(OBJS_LIBFT) $(OBJS_PRINTF)

bonus: $(OBJS_LIBFT) $(BONUS_OBJS)
	@ar rc $(NAME) $(BONUS_OBJS) $(OBJS_LIBFT)

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJS_LIBFT) $(OBJS_PRINTF) $(BONUS_OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
