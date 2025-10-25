Srcs = main.cpp harl.cpp

Header = harl.hpp

Name = harl

all: $(Name)

$(Name): $(Srcs) $(Header)
	c++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

re: clean all