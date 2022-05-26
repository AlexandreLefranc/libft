# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 18:24:33 by alefranc          #+#    #+#              #
#    Updated: 2022/05/26 10:20:07 by alefranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#------------------------------------------------------------------------------#
#                                                                              #
#                               DECLARATIONS                                   #
#                                                                              #
#------------------------------------------------------------------------------#

#------------------------------------#
#             COMPILATION            #
#------------------------------------#

NAME = libft.a

CC = clang
CFLAG = -Wall -Wextra -Werror -O2
PROJINC_FLAG = -I include

#------------------------------------#
#               SOURCES              #
#------------------------------------#

SRCDIR		=	src/

SRCBOOL		=	ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isnumber.c \
				ft_isprint.c

SRCCONVERT	=	ft_atoi.c \
				ft_itoa.c

SRCDLST		=	ft_dlstadd_back.c \
				ft_dlstadd_front.c \
				ft_dlstdel_all.c \
				ft_dlstdel_one.c \
				ft_dlstfirst.c \
				ft_dlstiter.c \
				ft_dlstlast.c \
				ft_dlstmap.c \
				ft_dlstnew.c \
				ft_dlstsize_left.c \
				ft_dlstsize_right.c \
				ft_dlstsize.c

SRCIO		=	ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				get_next_line.c

SRCLST		=	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstprevlast.c \
				ft_lstsize.c

SRCMATH		=

SRCMEM		=	ft_bzero.c \
				ft_calloc.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c

SRCPRINTF	=	ft_printf.c \
				ft_putarg_size.c \
				ft_putnbr_size.c \
				ft_putptr_puthexa_putunsigned_size.c \
				ft_putstr_size.c

SRCSTR		=	ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strjoin2.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

SRCSYS		=

SRCTAB		=	ft_strtabfree.c \
				ft_strtabjoin.c \
				ft_strtablen.c \
				ft_strtabsize.c

SRC			=	$(addprefix $(SRCDIR)src_bool/, $(SRCBOOL)) \
				$(addprefix $(SRCDIR)src_convert/, $(SRCCONVERT)) \
				$(addprefix $(SRCDIR)src_dlst/, $(SRCDLST)) \
				$(addprefix $(SRCDIR)src_io/, $(SRCIO)) \
				$(addprefix $(SRCDIR)src_lst/, $(SRCLST)) \
				$(addprefix $(SRCDIR)src_math/, $(SRCMATH)) \
				$(addprefix $(SRCDIR)src_mem/, $(SRCMEM)) \
				$(addprefix $(SRCDIR)src_printf/, $(SRCPRINTF)) \
				$(addprefix $(SRCDIR)src_str/, $(SRCSTR)) \
				$(addprefix $(SRCDIR)src_sys/, $(SRCSYS)) \
				$(addprefix $(SRCDIR)src_tab/, $(SRCTAB)) \

#------------------------------------#
#               OBJECTS              #
#------------------------------------#

OBJDIR		=	obj/
OBJ			=	$(subst $(SRCDIR),$(OBJDIR),$(SRC:.c=.o))

#------------------------------------#
#               HEADER               #
#------------------------------------#

HEADERDIR	=	include/
HEADERFILES	=	ft_printf.h \
				get_next_line.h \
				libft.h
HEADER		=	$(addprefix $(HEADERDIR), $(HEADERFILES))

#------------------------------------#
#              SUMMARY               #
#------------------------------------#

LIB_ARCHIVE	=
INC_FLAG	= $(PROJINC_FLAG)
LIB_PATH	=
LIB_FLAG	=

#------------------------------------------------------------------------------#
#                                                                              #
#                                   RULES                                      #
#                                                                              #
#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJDIR)%.o: $(SRCDIR)%.c $(HEADER)
	@mkdir -p `dirname $@`
	$(CC) $(CFLAG) -c $(INC_FLAG) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
