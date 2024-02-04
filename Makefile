CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = list 
OBJDIR = .
SRCS = ft_stack_clear.c ft_stack_create.c ft_stack.h ft_stack_is_empty.c  \
		ft_stack_pop.c ft_stack_push.c ft_stack_size.c ft_stack_top.c \
		ft_lstadd_at_index.c ft_lstadd_front.c ft_lstdel_at_index.c  \
		ft_lstdel_front.c ft_lstiter.c ft_lstnew.c ft_lstsize.c \
		ft_lstadd_back.c ft_lstclear.c ft_lstdel_back.c ft_lst.h ft_lstmap.c ft_lstsearch_item.c
OBJS = $(SRCS:.c=.o)
NAME = containersft.a

vpath %.c $(SRCDIR)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
