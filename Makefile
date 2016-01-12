CLANG=~/src/llvm/build/bin/clang-cl
CL=cl-2013-64
CFLAGS=-c -O1
CFLAGS=-c -FS -O1 #FS helps debugging
main.exe: gfxplatform.obj main.obj
	$(CL)  main.obj gfxplatform.obj
main.obj: main.cc
	$(CLANG)  $(CFLAGS)  main.cc
gfxplatform.obj: gfxplatform.cc
	$(CL)  $(CFLAGS) gfxplatform.cc
clean:
	rm gfxplatform.obj main.obj main.exe
