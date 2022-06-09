SRC =		$(wildcard *.c)
OBJ =		$(SRC:.c=.o)
DEBUG =		false
CFLAGS =	-I./include
ifeq ($(DEBUG),true)
	CFLAGS += -g3 -ggdb
endif
LDFLAGS =	-lcsfml-window \
			-lcsfml-graphics \
			-lcsfml-system \
			-lcsfml-audio \
			-L./lib/my \
			-lmy \
			-L./lib/my_linkedlist \
			-llinkedlist
TARGET =	game


all: lib-make $(TARGET)
$(TARGET): $(OBJ)
	gcc -o $(TARGET) $(OBJ) $(LDFLAGS)

lib-make:
	make -C lib/my
	make -C lib/my_linkedlist

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean: clean
	make -C lib/my fclean
	rm -f $(TARGET)

re: fclean all
