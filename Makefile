CLANG=~/src/llvm/build/bin/clang-cl
CL=cl-2013-64

main.exe: gfxplatform.obj main.obj
	$(CL)  main.obj gfxplatform.obj
main.obj: main.cc
	$(CLANG)  -c -MD -TP -nologo -W3 -Gy -FS -GR-   -UDEBUG -DNDEBUG -O1 -Oi main.cc
gfxplatform.obj: gfxplatform.cc
	$(CL)  -c -MD -TP -nologo -W3 -Gy -FS -GR-   -UDEBUG -DNDEBUG -O1 -Oi gfxplatform.cc
clean:
	rm gfxplatform.obj main.obj main.exe
