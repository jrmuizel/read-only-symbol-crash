typedef int *T;

const T *f(const T *);

inline const T *Ops() {
	static int k;
	static const T sOps = true ? 0 : &k;
	return &sOps;
}


