#pragma once
#define MAX_VERTEX 30

typedef struct graphType {
	int n;							// 그래프의 정점 개수
	int adjMatrix[MAX_VERTEX][MAX_VERTEX];		// 그래프에 대한 30x30의 2차원 배열
} graphType;

void createGraph(graphType* g);
void insertVertex(graphType* g, int v);			// 정점 삽입
void insertEdge(graphType* g, int u, int v);	// 간선 삽입
void print_adjMatrix(graphType* g);