NAME = replace
SRC = replace.cpp
C = clang++
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(FLAGS) -o $@ $^

%.o : %.cpp
	$(C) -c $< -o $@

clean:
	rm -f replace.o

fclean: clean
	rm -f replace

re: fclean all

.PHONY: all, clean, fclean, re