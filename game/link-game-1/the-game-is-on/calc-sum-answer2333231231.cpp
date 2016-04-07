#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

inline void set_file_IO(string);
inline void close_IO(void);
inline void work(void);

int main(void) {
	#ifndef ONLINE_JUDGE
		set_file_IO("calc-sum");
	#endif
	ios::sync_with_stdio(false);
	work();
	#ifndef ONLINE_JUDGE
		close_IO();
	#endif
	return 0;
}

inline void work(void) {
	int sum = 0;
	for (int i=1; i<=5000; ++i) {
		int tmp;
		cin >> tmp;
		sum += tmp;
	}
	cout << sum << endl;
}

inline void set_file_IO(string name) {
	freopen((name + ".in" ).c_str(), "r", stdin );
	freopen((name + ".out").c_str(), "w", stdout);
}

inline void close_IO(void) {
	fclose(stdin);
	fclose(stdout);
}
