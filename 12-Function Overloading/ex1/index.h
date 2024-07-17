class index {
private:
	int count;
public:
	index() { count = 0; }
	index(int i) { count = i; }
	void operator++() {  //keyword
		++count;
	}
	//void increment() { count++; }
	int showdata() { return (count); }
};