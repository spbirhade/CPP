SOURCE	= main.cpp
BINARY	= main
HEADER	= libdate
LIB	= -L $(HEADER) -l date
BIN	= /usr/bin
CP	= cp
CD	= cd
RM	= rm
SUOD	= sudo


$(BINARY): $(SOURCE) $(HEADER)/*
	$(CD) $(HEADER) && $(MAKE)
	$(CXX) -I $(HEADER)  $(SOURCE) -o $(BINARY) $(LIB)


all: clean $(BINARY)


clean:
	$(RM) -rf $(BINARY)
	$(CD) $(HEADER) && $(MAKE) clean


install:
	$(CD) $(HEADER) && $(MAKE) install
	sudo $(CP) $(BINARY) $(BIN)


uninstall:
	sudo $(RM) -rf $(BIN)/$(BINARY)
	$(CD) $(HEADER) && $(MAKE) uninstall
