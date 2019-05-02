SEP = \\
COMPILER = g++

SRC = src$(SEP)dev$(SEP)kemomitten$(SEP)

cli-req = $(SRC)client.cpp\
					$(SRC)model$(SEP)Sprite.cpp\
					$(SRC)model$(SEP)Map.cpp

svr-req = $(SRC)server.cpp

all: client server

client.exe: $(cli-req)
	${COMPILER} $^ -o client.exe

server.exe: $(svr-req)
	${COMPILER} $^ -o $@

client: client.exe

server: server.exe
