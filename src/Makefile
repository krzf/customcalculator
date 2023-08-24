#Сборка программы должна быть настроена с помощью Makefile со стандартным набором целей
#для GNU-программ: all, install, uninstall, clean, dvi, dist, test, gcov_report.
#Установка должна вестись в любой другой произвольный каталог
FLAGS = -Wall -Wextra -Werror -std=c11
CC = gcc
LFLAGS = -fprofile-arcs -ftest-coverage
VALGRIND_FLAGS=--leak-check=full
VALGRIND_FLAGS_v2 = --log-file="valgrind.txt" --track-origins=yes --trace-children=yes --leak-check=full --leak-resolution=med
LINUX_FLAGS=-lcheck -lsubunit -lrt -lpthread
MAC_FLAGS=-lcheck -lm
OS := $(shell uname -s)


all: test gcov_report install dvi

gcov: gcov_report

test: smartcalc.c check.c
ifeq ($(OS),Linux)
	$(CC) $(FLAGS) --coverage $(LFLAGS)  smartcalc.c check.c $(LINUX_FLAGS) -o test -lm
else
	$(CC) $(FLAGS) --coverage $(LFLAGS) smartcalc.c check.c -o test $(MAC_FLAGS)
endif
	./test


gcov_report: test
	lcov -o report.info -c -d .
	genhtml -o report report.info
ifeq ($(OS),Linux)
	xdg-open ./report/index.html	
else
	open ./report/index.html	
endif
	
style:
	clang-format -style=Google -i smartcalc.h check.c 

stylecheck:
	clang-format -style=Google -n smartcalc.h check.c 

memory_check: smartcalc.a
ifeq ($(OS),Linux)
	$(CC) $(FLAGS) check.c $< -o memory_test $(LINUX_FLAGS)
	CK_FORK=no valgrind $(VALGRIND_FLAGS) ./memory_test
endif
ifeq ($(OS),Darwin)
	$(CC) $(FLAGS) check.c $< -o memory_test $(MAC_FLAGS)
	leaks --atExit -- ./memory_test      
endif


install:
	@mkdir -p ../build
	@cd smartcalc && qmake && make && make clean && rm -rf Makefile && mv smartcalc ../../build/smartcalc.app
	@cp -R ../build/smartcalc.app ~/Desktop/smartcalc.app
	@echo "Install completed"


uninstall:
	@rm -rf ~/Desktop/smartcalc.app ../build
	@echo "Uninstall completed"


dvi:
	@open smartcalc.html


dist:
	@mkdir -p ../dist
	@cp -R ../build/smartcalc.app ../dist
	@cp ../README_RUS.md ../dist && cp ../README.md ../dist
	@cd ../dist && tar cvzf smartcalc.tgz *
	@cd ../dist && rm -rf smartcalc.app README.md README_RUS.md
	@echo "The build was successfully archived"

valgrind: test
	valgrind $(VALGRIND_FLAGS_v2) ./test
	grep -n "ERROR SUMMARY" valgrind.txt

garb: smartcalc.a
	$(CC) $(FLAGS) $(OBJ) $(LFLAGS) garb.c -o test $(MAC_FLAGS)
	./test

clean:
	-rm -rf *.o && rm -rf *.gcno
	-rm -rf *.a && rm -rf *.gcda
	-rm -rf *.info && rm -rf *.gcov
#-rm -rf ./smartcalc && rm -rf ./gcov_report
#-rm -rf ./report/

