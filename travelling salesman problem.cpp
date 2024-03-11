#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define V 4 
int min(int a, int b) {
    return (a < b) ? a : b;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

bool next_permutation(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1])
        i--;
    if (i < 0)
        return false;
    int j = n - 1;
    while (arr[j] <= arr[i])
        j--;
    swap(&arr[i], &arr[j]);
    reverse(arr, i + 1, n - 1);
    return true;
}


int tsp(int graph[][V], int start) {
        int vertices[V-1];
    for (int i = 0, k = 0; i < V; i++) {
        if (i != start)
            vertices[k++] = i;
    }

   int min_path = 999;
    do {
                int current_pathweight = 0;
        
        int k = start;
        for (int i = 0; i < V-1; i++) {
            current_pathweight += graph[k][vertices[i]];
            k = vertices[i];
        }
        current_pathweight += graph[k][start];
        
               min_path = min(min_path, current_pathweight);

    } while (next_permutation(vertices, V-1));

    return min_path;
}

int main() {
    int graph[][V] = {{0, 16, 11, 6},
                      {8, 0, 13, 16},
                      {4, 7, 0, 9},
                      {5, 12, 2, 0}};
    int start = 0;
    printf("The minimum cost of the Travelling Salesman Problem is %d\n", tsp(graph, start));
    return 0;
}

