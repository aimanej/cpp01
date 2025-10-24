Srcs_main = main.cpp

Srcs_humans = humanA.cpp humanB.cpp

Srcs_weapon = weapon.cpp

Header = weapon.hpp

Name = fight

all:$(Name)

$(Name): $(Srcs_humans) $(Srcs_weapon) $(Header)
	c++ $(Srcs_main) $(Srcs_weapon) $(Srcs_humans) -o $(Name)

clean:
	rm -rf $(Name)

re:clean all