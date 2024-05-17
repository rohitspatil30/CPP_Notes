#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

// Queue implementation
typedef struct
{
    int arr[MAX_SIZE];
    int front, rear;
} Queue;

void init_queue(Queue *q)
{
    q->front = q->rear = -1;
}

int is_empty(Queue *q)
{
    return q->front == -1;
}

void enqueue(Queue *q, int item)
{
    if (is_empty(q))
    {
        q->front = q->rear = 0;
    }
    else
    {
        q->rear++;
    }
    q->arr[q->rear] = item;
}

int dequeue(Queue *q)
{
    int item = q->arr[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return item;
}

// DFS implementation
void dfs(int graph[][MAX_SIZE], int visited[], int start, int num_vertices)
{
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i < num_vertices; i++)
    {
        if (graph[start][i] && !visited[i])
        {
            dfs(graph, visited, i, num_vertices);
        }
    }
}

// BFS implementation
void bfs(int graph[][MAX_SIZE], int visited[], int start, int num_vertices)
{
    Queue q;
    init_queue(&q);

    visited[start] = 1;
    printf("%d ", start);
    enqueue(&q, start);

    while (!is_empty(&q))
    {
        int current = dequeue(&q);

        for (int i = 0; i < num_vertices; i++)
        {
            if (graph[current][i] && !visited[i])
            {
                visited[i] = 1;
                printf("%d ", i);
                enqueue(&q, i);
            }
        }
    }
}

int main()
{
    int num_vertices, start;
    clock_t start_time, end_time;
    double time_elapsed;

    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);

    int graph[MAX_SIZE][MAX_SIZE];
    int visited[MAX_SIZE] = {0};

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < num_vertices; i++)
    {
        for (int j = 0; j < num_vertices; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &start);

    printf("1. BFS\n2. DFS\nEnter your choice: ");
    int choice;
    scanf("%d", &choice);

    start_time = clock();

    switch (choice)
    {
    case 1:
        bfs(graph, visited, start, num_vertices);
        break;
    case 2:
        dfs(graph, visited, start, num_vertices);
        break;
    default:
        printf("Invalid choice.");
        return 0;
    }

    end_time = clock();
    time_elapsed = (double)(end_time - start_time) / CLOCKS_PER_SEC * 1e12;

    printf("\nExecution time: %lf * 10^-12 seconds\n", time_elapsed);

    return 0;
}
