SRC =		$(wildcard *.c)
OBJ =		$(SRC:.c=.o)
CFLAGS =	-W -Wall -Wextra -Werror -I../../include/ -g3
TARGET =	liblinkedlist.a
HEADER = 	linkedlist.h

all: $(TARGET)
$(TARGET): $(OBJ)
	ar rc $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
