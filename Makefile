# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aramanan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/11 07:52:52 by aramanan          #+#    #+#              #
#    Updated: 2014/11/25 11:27:29 by aramanan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./ft_atoi.c \
	  ./ft_isalnum.c \
	  ./ft_isalpha.c \
	  ./ft_isascii.c \
	  ./ft_isdigit.c \
	  ./ft_isprint.c \
	  ./ft_bzero.c \
	  ./ft_itoa.c \
	  ./ft_memalloc.c \
	  ./ft_memchr.c \
	  ./ft_memcmp.c \
	  ./ft_memcpy.c \
	  ./ft_memccpy.c \
	  ./ft_memdel.c \
	  ./ft_memmove.c \
	  ./ft_memset.c \
	  ./ft_putchar.c \
	  ./ft_putchar_fd.c \
	  ./ft_putendl.c \
	  ./ft_putendl_fd.c \
	  ./ft_putnbr.c \
	  ./ft_putnbr_fd.c \
	  ./ft_putstr.c \
	  ./ft_putstr_fd.c \
	  ./ft_tolower.c \
	  ./ft_toupper.c \
	  ./ft_strclr.c \
	  ./ft_strchr.c \
	  ./ft_strdel.c \
	  ./ft_striter.c \
	  ./ft_striteri.c \
	  ./ft_strjoin.c \
	  ./ft_strmap.c \
	  ./ft_strmapi.c \
	  ./ft_strrchr.c \
	  ./ft_strrev.c \
	  ./ft_strdup.c \
	  ./ft_strequ.c \
	  ./ft_strnequ.c \
	  ./ft_strcat.c \
	  ./ft_strcpy.c \
	  ./ft_strlcat.c \
	  ./ft_strncat.c \
	  ./ft_strncpy.c \
	  ./ft_strcmp.c \
	  ./ft_strncmp.c \
	  ./ft_strnew.c \
	  ./ft_strstr.c \
	  ./ft_strnstr.c \
	  ./ft_strsplit.c \
	  ./ft_strsub.c \
	  ./ft_strlen.c \
	  ./ft_strtrim.c \
	  ./ft_lstnew.c \
	  ./ft_lstdelone.c \
	  ./ft_lstdel.c \
	  ./ft_lstadd.c \
	  ./ft_lstiter.c

OBJECT = ./ft_atoi.o \
	  ./ft_isalnum.o \
	  ./ft_isalpha.o \
	  ./ft_isascii.o \
	  ./ft_isdigit.o \
	  ./ft_isprint.o \
	  ./ft_bzero.o \
	  ./ft_itoa.o \
	  ./ft_memalloc.o \
	  ./ft_memchr.o \
	  ./ft_memcmp.o \
	  ./ft_memcpy.o \
	  ./ft_memccpy.o \
	  ./ft_memdel.o \
	  ./ft_memmove.o \
	  ./ft_memset.o \
	  ./ft_putchar.o \
	  ./ft_putchar_fd.o \
	  ./ft_putendl.o \
	  ./ft_putendl_fd.o \
	  ./ft_putnbr.o \
	  ./ft_putnbr_fd.o \
	  ./ft_putstr.o \
	  ./ft_putstr_fd.o \
	  ./ft_tolower.o \
	  ./ft_toupper.o \
	  ./ft_strclr.o \
	  ./ft_strchr.o \
	  ./ft_strdel.o \
	  ./ft_striter.o \
	  ./ft_striteri.o \
	  ./ft_strjoin.o \
	  ./ft_strmap.o \
	  ./ft_strmapi.o \
	  ./ft_strrchr.o \
	  ./ft_strrev.o \
	  ./ft_strdup.o \
	  ./ft_strequ.o \
	  ./ft_strnequ.o \
	  ./ft_strcat.o \
	  ./ft_strcpy.o \
	  ./ft_strlcat.o \
	  ./ft_strncat.o \
	  ./ft_strncpy.o \
	  ./ft_strcmp.o \
	  ./ft_strncmp.o \
	  ./ft_strnew.o \
	  ./ft_strstr.o \
	  ./ft_strnstr.o \
	  ./ft_strsplit.o \
	  ./ft_strsub.o \
	  ./ft_strlen.o \
	  ./ft_strtrim.o \
	  ./ft_lstnew.o \
	  ./ft_lstdelone.o \
	  ./ft_lstdel.o \
	  ./ft_lstadd.o \
	  ./ft_lstiter.o

all: $(NAME) lib

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC) -I ./
	@echo "Generation des fichiers.o OK"

lib:
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "Creation de la librairie OK"

clean:
	@rm -f $(OBJECT)
	@echo "Suppression objects OK"

fclean: clean
	@rm -f $(NAME)
	@echo "Suppression de la librairie OK"

re: clean fclean all

.PHONY : all lib clean fclean re
