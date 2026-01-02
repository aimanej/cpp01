Srcs = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

Header = Zombie.hpp

Flags = c++ -Wall -Wextra -Werror -std=c++98

Name = Zombie

all:$(Name)

$(Name):$(Srcs) $(Header)
	$(Flags) $(Srcs) -o$(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.Phony:clean fclean all re