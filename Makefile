# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 20:31:36 by umeneses          #+#    #+#              #
#    Updated: 2023/09/04 10:31:01 by umeneses         ###   ########.fr        #
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
					ft_toupper.c

LIBFT_PATH			= $(shell dirname $(shell pwd))/Libft_GitHub

INCLUDE				= libft.h

OBJS 				= $(SRC_FTS:.c=.o)

AR 					= @ar -rcs

RM 					= rm -f

CC 					= gcc

CFLAGS 				= -Wall -Wextra -Werror

NORM				= norminette -R CheckForbiddenSourcHeader

all:				$(NAME)

$(NAME):			$(OBJS)
					$(AR) $(NAME) $(OBJS)
					$(NORM) $(SRC_FTS) $(INCLUDE)
					@echo "\n$(SUCCESS)The functions below were added into $(NAME):$(COLOR_OFF)"
					@echo "$(UPDATING)$(SRC_FTS)$(COLOR_OFF)"
					@echo "\n$(SUCCESS)The file '$(NAME)' was generated :D $(COLOR_OFF)"
					@echo "$(SUCCESS)\o/$(COLOR_OFF)"

%.o: %.c
					$(CC) -c $(CFLAGS) $< -o $@ -I $(INCLUDE_PATH)$(INCLUDE)
					@echo "\n$(SUCCESS)The function was added as an object file in $(NAME) \o/ !$(COLOR_OFF)"

clean:
					@echo "\n$(NAME): $(WARNING)object files were deleted O.o$(COLOR_OFF)"
					$(RM) $(OBJS)

fclean:				
					@$(RM) $(OBJS)
					@echo "$(WARNING)It's clean: object files were deleted O.o$(COLOR_OFF)"
					@$(RM) $(NAME)
					@echo "$(WARNING)It's clean: $(NAME) was deleted O.o$(COLOR_OFF)"
					@$(RM) $(EXECUTABLE)
					@echo "$(WARNING)It's clean: $(EXECUTABLE) was deleted T.T$(COLOR_OFF)"

re:					fclean all

.PHONY:				all clean fclean re