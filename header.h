typedef void (*fn)();

inline void dancing() {}

const fn *f(const fn *);

inline const fn *Ops() {
	static const fn sOps = true ? 0 : dancing;
	return &sOps;
}


