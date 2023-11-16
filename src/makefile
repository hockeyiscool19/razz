include .env
export $(shell sed 's/=.*//' .env)

CFLAGS = -lcurl
app: main.cpp spotify/spotify.cpp
	g++ main.cpp spotify/spotify.cpp -o app $(CFLAGS)

