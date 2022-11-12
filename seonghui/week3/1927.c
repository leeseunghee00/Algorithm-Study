#include <stdio.h>
#include <string.h>

#define SIZE 100
typedef struct
{
	int H[SIZE];
	int n;
}Heap;

void init(Heap *heap)
{
	heap->n = 0;
	for (int i = 0; i < SIZE; i++)
		heap->H[i] = 0;
}

void intertItem(Heap *heap, int k)
{
	heap->n++;
	heap->H[heap->n] = k;
}

void downHeap(Heap *heap, int i)
{
	if (i * 2 > heap->n)
		return;
	if (heap->H[i] < heap->H[i * 2] || heap->H[i] < heap->H[i * 2 + 1])
	{
		if (heap->H[i * 2] > heap->H[i * 2 + 1])
		{
			int temp = heap->H[i];
			heap->H[i] = heap->H[i * 2];
			heap->H[i * 2] = temp;
			downHeap(heap, i * 2);
		}
		else
		{
			int temp = heap->H[i];
			heap->H[i] = heap->H[i * 2 + 1];
			heap->H[i * 2 + 1] = temp;
			downHeap(heap, i * 2 + 1);
		}
	}

}

void printHeap(Heap *heap)
{
	for (int i = 1; i <= heap->n; i++)
		printf("[%d] ", heap->H[i]);
}

void rBuildHeap(Heap *heap, int i)
{
	if (i > heap->n)
		return;
	if (i * 2 <= heap->n) //왼쪽 자식
		rBuildHeap(heap, i * 2);
	if (i * 2 + 1 <= heap->n) //오른쪽 자식
		rBuildHeap(heap, i * 2 + 1);
	downHeap(heap, i);
}

void buildHeap(Heap *heap)
{
	for (int i = heap->n / 2; i >= 1; i--)
		downHeap(heap, 1);
}

int removeMax(Heap *heap)
{
	int k = heap->H[1];
	heap->H[1] = heap->H[heap->n];
	heap->n--;
	downHeap(heap, 1);
	return k;
}

void inPlaceHeapSort(Heap *heap)
{
	int size = heap->n;
	int key;
	for (int i = 0; i < size; i++)
	{
		key = removeMax(heap);
		heap->H[heap->n + 1] = key;

	}
}



int main()
{
	Heap heap;
	init(&heap);

	int num;
	int k;
	scanf("%d\n", &num);
	
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &k);
        if(k!=0)
            intertItem(&heap, k);
        else{
            
        }
		//printf("%[%d] ", k);
	}
	printf("\n");

	rBuildHeap(&heap, 1);
	//buildHeap(&heap);
	//printHeap(&heap);

	int n = heap.n;
	inPlaceHeapSort(&heap);

	for (int i = 1; i <= n; i++)
		printf(" %d", heap.H[i]);
	printf("\n");

	return 0;
}