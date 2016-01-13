struct PLDHashTableOps {
	void (*moveEntry)();
};

inline void dancing() {}
void r();

const PLDHashTableOps *f(const PLDHashTableOps *);

inline const PLDHashTableOps *Ops() {
	static const PLDHashTableOps sOps = {
		true ? 0 : dancing};
	return &sOps;
}


