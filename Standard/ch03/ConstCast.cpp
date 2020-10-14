//: C03:ConstCast.cpp
int main()
{
	const int i = 0;
	int *j = (int *)&i; // Deprecated form
	j = const_cast<int *>(&i); // Preferred
	// Can't do simultaneous additional casting:
	//! long *l = const_cast<long *>(&i);
	volatile int k = 0;
	int *u = const_cast<int *>(&k);
} ///:~
