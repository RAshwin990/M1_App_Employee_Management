SRC = employee_management.c\
src/employee_management.c
INC = inc
employee_management.exe : $(SRC) 
	gcc $^ -I$(INC) -o $@

run : employee_management.exe
	./employee_management.exe

clean:
	del employee_management.exe
