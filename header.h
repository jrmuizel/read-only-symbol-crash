typedef int *T;

const T *f(const T *);

inline const T *Ops() {
	static int k;
	// variables initialized to expressions involving variables will not be put in rodata
	// The following examples are put in rodata:
	//  static const T sOps = &k;
	//  static const T sOps = true ? 0 : 0;
	// This one is not:
	static const T sOps = true ? 0 : &k;
	return &sOps;
}


