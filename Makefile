# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bira <bira@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 20:31:36 by umeneses          #+#    #+#              #
#    Updated: 2023/08/25 21:32:26 by bira             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				= libft.a

AUTHOR				= umeneses

SUCCESS				= \033[0;32m
WARNING				= \033[0;35m
UPDATING			= \033[0;33m
COLOR_OFF			= \033[0m

SRC_FTS				= ft_atoi.c		\
					ft_bzero.c		\
					ft_calloc.c		\
					ft_isalnum.c	\
					ft_isalpha.c	\
					ft_isascii.c	\
					ft_isdigit.c	\
					ft_isprint.c	\
					ft_memchr.c		\
					ft_memcmp.c		\
					ft_memcpy.c		\
					ft_memmove.c	\
					ft_memset.c		\
					ft_strchr.c		\
					ft_strdup.c		\
					ft_strlcat.c	\
					ft_strlcpy.c	\
					ft_strlen.c		\
					ft_strncmp.c	\
					ft_strnstr.c	\
					ft_strrchr.c	\
					ft_tolower.c	\
					ft_toupper.c	\
					ft_substr.c		\
					ft_itoa.c		\
					ft_putchar_fd.c	\
					ft_putstr_fd.c	\
					ft_putendl_fd.c	\
					ft_putnbr_fd.c	\
					ft_striteri.c

LIBFT_PATH			= $(shell dirname $(shell pwd))/Libft_GitHub/

#INCLUDE_PATH		= $(LIBFT_PATH)/

INCLUDE				= libft.h

OBJS 				= $(SRC_FTS:.c=.o)
# Use same files from SRC, but change .c to .o

AR 					= @ar -rcs
# ARCHIVE adds OBJS files *.o static library (NAME),
# creating library (NAME) if it don't exist.

RM 					= rm -f
# Remove files command

CC 					= gcc

CFLAGS 				= -Wall -Wextra -Werror

NORM				= norminette -R CheckForbiddenSourcHeader

all:				$(NAME)
# default all command to compile

$(NAME):			$(OBJS)
					@echo "\n$(SUCCESS) '$(NAME)' file was generated :D $(COLOR_OFF)"
					$(NORM) $(SRC_FTS) $(INCLUDE)
					@echo "\n$(SUCCESS)The functions below were added into $(NAME):$(COLOR_OFF)"
					@echo "$(UPDATING)$(SRC_FTS)$(COLOR_OFF)"
					@echo "$(SUCCESS)\o/$(COLOR_OFF)"
					$(AR) $(NAME) $(OBJS)
# Compile files following above rules

%.o: %.c
					$(CC) -c $(CFLAGS) $< -o $@ -I. -I$(LIBFT_PATH)
					@echo "\n$(SUCCESS)The function was added as an object file in $(NAME) \o/ !$(COLOR_OFF)"

#%.o: %.c
#$(CC) -c $(CFLAGS) $< -o $@ -I $(INCLUDE_PATH)$(INCLUDE)
#@echo "\n$(SUCCESS)The function was added as an object file in $(NAME) \o/ !$(COLOR_OFF)"

clean:
					@echo "\n$(NAME): $(WARNING)object files were deleted O.o$(COLOR_OFF)"
					$(RM) $(OBJS)
# Clean generated *.o files

fclean:				
					@$(RM) $(OBJS)
					@echo "$(WARNING)It's clean: object files were deleted O.o$(COLOR_OFF)"
					@$(RM) $(NAME)
					@echo "$(WARNING)It's clean: $(NAME) was deleted O.o$(COLOR_OFF)"
					@$(RM) $(EXECUTABLE)
					@echo "$(WARNING)It's clean: $(EXECUTABLE) was deleted T.T$(COLOR_OFF)"
# Force clean all files generated on all

re:					fclean all
# Regenerate compilation

.PHONY:				all clean fclean re
# Phony will run, independent from state of the file system,
# avoid make in files with same name.