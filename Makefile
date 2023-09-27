# Dirs
SRC_DIR = ./
INC_DIR = ./

# .c and .o files
SRC_FILES = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \

SRCS = 		$(addprefix $(SRC_DIR), $(SRC_FILES))
O_FILES = 	$(SRCS:.c=.o)

# Compiler settings
CC = cc
AR = ar -rcs
CFLAGS = -Wall -Wextra -Werror
INC_FLAGS = -I $(INC_DIR)

# Target
NAME = libft.a

all: $(NAME)

$(NAME): 	$(O_FILES)
			$(AR) $(NAME) $^

.c.o:
			$(CC) $(CFLAGS) -c $(INC_FLAGS) $< -o ${<:.c=.o}

clean:
			rm -rf $(O_FILES)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re