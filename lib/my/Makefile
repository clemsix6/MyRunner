SRC =		$(wildcard *.c)
OBJ =		$(SRC:.c=.o)
CFLAGS =	-W -Wall -Wextra -Werror -I../../include/
TARGET =	libmy.a
HEADER = 	my.h

all: $(TARGET)
$(TARGET): $(OBJ)
	ar rc $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
