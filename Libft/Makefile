# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcampas- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 14:10:57 by dcampas-          #+#    #+#              #
#    Updated: 2024/10/03 12:12:43 by dcampas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
SRC_F:= ft_isalpha ft_isdigit ft_isalnum \
		ft_isascii ft_isprint ft_strlen \
		ft_memset ft_bzero ft_memcpy \
		ft_memmove ft_strlcpy ft_strlcat \
		ft_toupper ft_tolower ft_strchr \
		ft_strrchr ft_strncmp ft_memchr \
		ft_memcmp ft_strnstr ft_atoi \
		ft_calloc ft_strdup ft_substr \
		ft_strjoin ft_strtrim ft_split ft_itoa \
		ft_strmapi ft_striteri ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
		
SRC:= $(addsuffix .c, $(SRC_F))
OBJS:= $(addsuffix .o, $(SRC_F))

FLAGS:= -Wall -Wextra -Werror
CC:= gcc
HEADER:= libft.h
RM:= rm -f


%.o: %.c $(HEADER) 
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

clean:
	$(RM) $(OBJS) 
	$(RM) $(OBJS_B)
	
fclean: clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all
