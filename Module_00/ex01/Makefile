NAME = phonebook
SRC = main.cpp functions.cpp
C = clang++
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(FLAGS) -o $@ $^

%.o : %.cpp
	$(C) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f phonebook

re: fclean all

.PHONY: all, clean, fclean, re