NAME = libft.a
PATH_SRC = ./src/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)

SRC = $(PATH_SRC)ft_memset.c $(PATH_SRC)ft_bzero.c $(PATH_SRC)ft_memcpy.c \
$(PATH_SRC)ft_memccpy.c $(PATH_SRC)ft_memmove.c $(PATH_SRC)ft_memchr.c \
$(PATH_SRC)ft_memcmp.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strdup.c \
$(PATH_SRC)ft_strcpy.c $(PATH_SRC)ft_strncpy.c $(PATH_SRC)ft_strcat.c \
$(PATH_SRC)ft_strncat.c $(PATH_SRC)ft_strlcat.c $(PATH_SRC)ft_strchr.c \
$(PATH_SRC)ft_strstr.c $(PATH_SRC)ft_strnstr.c $(PATH_SRC)ft_strcmp.c \
$(PATH_SRC)ft_strncmp.c $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_isalpha.c \
$(PATH_SRC)ft_isdigit.c $(PATH_SRC)ft_isalnum.c $(PATH_SRC)ft_isascii.c \
$(PATH_SRC)ft_isprint.c $(PATH_SRC)ft_toupper.c $(PATH_SRC)ft_tolower.c

OBJ = ft_memset.o ft_bzero.o ft_memcpy.o \
ft_memccpy.o ft_memmove.o ft_memchr.o \
ft_memcmp.o ft_strlen.o ft_strdup.o \
ft_strcpy.o ft_strncpy.o ft_strcat.o \
ft_strncat.o ft_strlcat.o ft_strchr.o \
ft_strstr.o ft_strnstr.o ft_strcmp.o \
ft_strncmp.o ft_atoi.o ft_isalpha.o \
ft_isdigit.o ft_isalnum.o ft_isascii.o \
ft_isprint.o ft_toupper.o ft_tolower.o

all: $(NAME) clean

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

