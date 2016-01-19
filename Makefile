CLANG=~/src/llvm/build/bin/clang-cl
CL=cl-2013-64
CFLAGS=-c -O1
CFLAGS=-c -FS #FS helps make it clear what's going in what section
main.exe: cl.obj main.obj
	$(CL)  main.obj cl.obj
main.obj: main.cc
	$(CLANG) -O1  $(CFLAGS)  main.cc
cl.obj: cl.cc
	$(CL) $(CFLAGS) cl.cc
clean:
	rm cl.obj main.obj main.exe
