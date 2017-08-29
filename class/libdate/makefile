SOURCE		= date.cpp
OBJECT		= date.o
LIBNAME		= libdate.so
CXXFLAGS	= -c -Wall -fPIC
HEADER		= date.h
LIBINCLUDE	= /usr/include
LIBINSTALPATH 	= /usr/lib
CP		= cp
RM		= rm


$(LIBNAME):$(OBJECT)
	$(CXX) --shared -o $(LIBNAME) $(OBJECT)


$(OBJECT):$(SOURCE) $(HEADER)
	$(CXX) $(CXXFLAGS) $(SOURCE)


all:clean $(LIBNAME)


install:$(LIBNAME) $(HEADER)
	sudo $(CP) $(HEADER) $(LIBINCLUDE)
	sudo $(CP) $(LIBNAME) $(LIBINSTALPATH)


uninstall:
	sudo $(RM) -rf $(LIBINCLUDE)/$(HEADER)
	sudo $(RM) -rf $(LIBINSTALPATH)/$(LIBNAME)


clean:
	$(RM) -rf $(LIBNAME) $(OBJECT)
