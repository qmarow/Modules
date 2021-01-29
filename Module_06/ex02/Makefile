NAME = main
SRC = main.cpp Base.cpp
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
	rm -f main

re: fclean all

.PHONY: all, clean, fclean, re