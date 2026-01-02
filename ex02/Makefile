Srcs = main.cpp

Name = Brain

Flags = c++ -Wall -Wextra -Werror -std=c++98

all:$(Name)

$(Name):$(Srcs)
	$(Flags) $(Srcs) -o$(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.Phony:clean fclean all re