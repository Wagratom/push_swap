LIBFT			=	./libft/libft.a

SOURCS			=	main.c auxiliaries.c sort1.c sort2.c sort3.c

INCLUDE			=	push_swap.h

OBJS_DIR		=	objects
OBJS			=	$(patsubst %.c, $(OBJS_DIR)/%.o, $(SOURCS))

CC				=	cc
CFLAGS			=	#-Wall -Wextra -Werror

RM				=	rm -rf
NAME			=	push_swap

VPATH			=	. ./sourcs ./operatins

$(OBJS_DIR)/%.o:	%.c
					$(CC) $(CFLAGS) -c $< -o $@ -I./include

all:				$(NAME)

$(NAME):			$(OBJS_DIR) $(OBJS)
					make libft
					$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $@

libft:
					$(MAKE) -C ./libft bonus

$(OBJS_DIR):
					mkdir -p $@

clean:
					$(MAKE) -C ./libft clean
					$(RM) $(OBJS_DIR)

fclean:				clean
					$(RM) $(NAME)
					$(RM) $(LIBFT)

re:					fclean	all

.PHONY:				all clean fclean re libft