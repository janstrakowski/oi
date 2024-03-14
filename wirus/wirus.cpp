#include <iostream>
#include <queue>

int main() {
	std::queue<bool> q;
	int n;
	int d;
	scanf("%d %d\n", &n, &d);
	for (;;) {
		int c = getchar();
		if (c == '1') {
			q.push(true);
			continue;
		}
		if (c == '0') {
			q.push(false);
			continue;
		}
		break;
	}
	for (int i = 0; i < d; i++) {
		bool b1 = q.front();
		q.pop();
		bool b2 = q.front();
		b1 = (b1 && !b2) || (!b1 && b2);
		q.push(b1);
	}
	for (;;) {
		if (q.size() <= 0) break;
		printf("%d", q.front());
		q.pop();
	}
	printf("\n");
	return 0;
}
