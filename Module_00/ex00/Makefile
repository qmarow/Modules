NAME = megaphone
SRC = megaphone.cpp
C = clang++
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(FLAGS) -o $@ $^

%.o : %.cpp
	$(C) -c $< -o $@

clean:
	rm -f megaphone.o

fclean: clean
	rm -f megaphone

re: fclean all

.PHONY: all, clean, fclean, re