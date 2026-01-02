Srcs = main.cpp weapon.cpp humanA.cpp humanB.cpp

Headers = weapon.hpp humanA.hpp humanB.hpp

Name = fight

all:$(Name)

$(Name): $(Srcs) $(Header)
	g++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

re:clean all