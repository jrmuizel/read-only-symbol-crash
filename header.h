typedef int *T;

const T *f(const T *);

inline const fn *Ops() {
	static int k;
	static const T sOps = true ? 0 : &k;
	return &sOps;
}


