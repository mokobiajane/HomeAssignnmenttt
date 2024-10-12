         
myProg : hello.o main.o
	g++ hello.o main.o -o myProg

hello.o : hello.cpp
	g++ -c hello.cpp

main.o : main.cpp
	g++ -c main.cpp

clean : 
	rm -rf myProg *.o


# TARGET = main 

# all:: $(TARGET)


# $(TARGET): main.cpp
# 	g++ -o $(TARGET) main.cpp


# clean:
# 	rm -rf $(TARGET)
