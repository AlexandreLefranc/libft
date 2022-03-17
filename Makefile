# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 18:24:33 by alefranc          #+#    #+#              #
#    Updated: 2022/03/17 08:04:33 by alefranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
FLAGS = -Wall -Wextra -Werror

# Sources files #

SRC_IO = ft_putchar_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \
		 ft_putstr_fd.c

SRC_BOOL = ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		   ft_isnumber.c \
		   ft_isprint.c

SRC_CONVERT = ft_atoi.c \
			  ft_itoa.c

SRC_DEBUG = ft_calloc_debug.c \
			ft_free_debug.c

SRC_DLST =

SRC_IO = ft_putchar_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \
		 ft_putstr_fd.c \
		 get_next_line.c

SRC_LST = ft_lstadd_back.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c \
		  ft_lstsize.c \
		  ft_lstadd_front.c \
		  ft_lstdelone.c \
		  ft_lstlast.c \
		  ft_lstprevlast.c \
		  ft_lstnew.c

SRC_MATH =

SRC_MEM = ft_bzero.c \
		  ft_calloc.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c

SRC_PRINTF = ft_printf.c \
			 ft_putnbr_size.c \
			 ft_putstr_size.c \
			 ft_putarg_size.c \
			 ft_putptr_puthexa_putunsigned_size.c

SRC_STR = ft_split.c \
		  ft_striteri.c \
		  ft_strlcpy.c \
		  ft_strncmp.c \
		  ft_strstr.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strjoin.c \
		  ft_strjoin2.c \
		  ft_strlen.c \
		  ft_strnstr.c \
		  ft_strtrim.c \
		  ft_toupper.c \
		  ft_strdup.c \
		  ft_strlcat.c \
		  ft_strmapi.c \
		  ft_strrchr.c \
		  ft_substr.c \
		  ft_strtabfree.c \
		  ft_strtabjoin.c \
		  ft_strtablen.c \
		  ft_strtabsize.c

SRC_SYS =

SRC_TAB =

HEADER = libft.h \
		 ft_printf.h \
		 get_next_line.h

# Preprocessing #

INCLUDE_DIR = include/
INCLUDE = $(addprefix $(INCLUDE_DIR), $(HEADER))

SRC_DIR = src/
SRC =	$(addprefix $(SRC_DIR)src_bool/, $(SRC_BOOL)) \
		$(addprefix $(SRC_DIR)src_convert/, $(SRC_CONVERT)) \
		$(addprefix $(SRC_DIR)src_dlst/, $(SRC_DLST)) \
		$(addprefix $(SRC_DIR)src_io/, $(SRC_IO)) \
		$(addprefix $(SRC_DIR)src_lst/, $(SRC_LST)) \
		$(addprefix $(SRC_DIR)src_math/, $(SRC_MATH)) \
		$(addprefix $(SRC_DIR)src_mem/, $(SRC_MEM)) \
		$(addprefix $(SRC_DIR)src_printf/, $(SRC_PRINTF)) \
		$(addprefix $(SRC_DIR)src_str/, $(SRC_STR)) \
		$(addprefix $(SRC_DIR)src_sys/, $(SRC_SYS)) \
		$(addprefix $(SRC_DIR)src_tab/, $(SRC_TAB))

OBJ_DIR = obj/
OBJ =	$(addprefix $(OBJ_DIR)src_bool/, $(SRC_BOOL:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_convert/, $(SRC_CONVERT:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_dlst/, $(SRC_DLST:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_io/, $(SRC_IO:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_lst/, $(SRC_LST:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_math/, $(SRC_MATH:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_mem/, $(SRC_MEM:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_printf/, $(SRC_PRINTF:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_str/, $(SRC_STR:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_sys/, $(SRC_SYS:.c=.o)) \
		$(addprefix $(OBJ_DIR)src_tab/, $(SRC_TAB:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCLUDE)
	@mkdir -p `dirname $@`
	$(CC) $(FLAGS) -c -I$(INCLUDE_DIR) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
