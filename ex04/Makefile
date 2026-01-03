Srcs = main.cpp

Flags = c++ -Wall -Wextra -Werror -std=c++98

Name = replace

all:$(Name)

$(Name): $(Srcs)
	$(Flags) $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.Phony:clean fclean all re