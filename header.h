struct PLDHashTableOps {
	void (*moveEntry)();
};

class PLDHashTable {
	public:   PLDHashTable(const PLDHashTableOps *aOps);
};

template <class EntryType> struct nsTHashtable {
	   nsTHashtable()       : mTable(Ops()) {
		  }
	  PLDHashTable mTable;
	  static void s_CopyEntry() {}
	  static const PLDHashTableOps *Ops();
};
template <class EntryType> const PLDHashTableOps *nsTHashtable<EntryType>::Ops() {
	static const PLDHashTableOps sOps = {
		true ? 0 : s_CopyEntry};
	return &sOps;
}

struct gfxPlatformFontList  {
	gfxPlatformFontList();
	nsTHashtable<int> mFontFamilies;
};


