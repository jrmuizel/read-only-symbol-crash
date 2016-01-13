struct PLDHashTableOps {
	void (*moveEntry)();
};

class PLDHashTable {
	public:   PLDHashTable(const PLDHashTableOps *aOps);
};

inline void dancing() {}
void r();

const PLDHashTableOps *f(const PLDHashTableOps *);

inline const PLDHashTableOps *Ops() {
	static const PLDHashTableOps sOps = {
		true ? 0 : dancing};
	return &sOps;
}


