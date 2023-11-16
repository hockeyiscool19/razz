include dev.env
export $(shell sed 's/=.*//' dev.env)

CFLAGS = -lcurl
app: main.cpp spotify/spotify.cpp
	g++ main.cpp spotify/spotify.cpp -o app $(CFLAGS)

