#include <stdio.h>
#include "Dijkstra.h"
#pragma warning(disable:4996)

int main(void) {
	freopen("C:\\data\\data_04_12.txt", "r", stdin);
	//freopen("C:\\data\\data2_04_12.txt", "r", stdin);

	initGraph();
	createGraph();
	printGraph();

	dijkstra(5);		// 5번(F) 정점으로 부터 모든 정점까지의 알고리즘 수행

	for (int i = 0; i < vertex; i++) {
		printPath(5, i);
	}
	printDistance(5);

	/*for (int i=0 ; i<vertex ; i++) {
		dijkstra(i);
		printf("---- %c 기준 최소 비용 및 경로 ---------------\n", i + 'A');
		for (int j=0 ; j<vertex ; j++) {
			printf("최소비용 : %c -> %c : %d\n", i + 'A', j + 'A', D[j]);
			printPath(i, j);
		}
		printDistance(i);
		printPredecessor();
	}*/

	return 0;
}
