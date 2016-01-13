CLANG=~/src/llvm/build/bin/clang-cl
CL=cl-2013-64
CFLAGS=-c -O1
CFLAGS=-c -FS #FS helps make it clear what's going in what section
main.exe: b.obj main.obj
	$(CL)  main.obj b.obj
main.obj: main.cc
	$(CLANG) -O1  $(CFLAGS)  main.cc
b.obj: b.cc
	$(CL) $(CFLAGS) b.cc
clean:
	rm b.obj main.obj main.exe
