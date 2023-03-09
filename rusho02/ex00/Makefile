NAME = rush-02

SOURCES = *.c

OBJECTS = $(SOURCES:.c=.o) 

$(NAME):
	cc -Wall -Wextra -Werror -o $(NAME) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)