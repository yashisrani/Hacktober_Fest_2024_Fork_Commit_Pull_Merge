class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
     int rootLargest = i;
    int lchild = (2 * i); 
    int rchild = (2 * i) + 1; 
  
    if (lchild < n && arr[lchild] > arr[rootLargest]) 
        rootLargest = lchild; 
  
    if (rchild < n && arr[rchild] > arr[rootLargest]) 
        rootLargest = rchild; 
  
    if (rootLargest != i) 
    { 
        swap(arr[i], arr[rootLargest]); 
  
        heapify(arr, n, rootLargest); 
    }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    for(int i=n/2; i>=0; i--){
        heapify(arr,n,i);
    }
    }

    
    public:
    //Function to sort an array using Heap Sort.
     void heapSort(int arr[], int n)
    {
        buildHeap(arr,n); 

	for (int i=n-1; i>0; i--) 
	{ 
		swap(arr[0], arr[i]);
		heapify(arr, i, 0); 
	}
    }
    
    //Function to insert element in heap.
void Insert(int arr[],int n)
{
  int i = n,temp;
  temp = arr[i];
  
  while( i > 1 && temp > arr[i/2] )
  {
    arr[i] = arr[i/2];
    i = i/2;
  }
  arr[i] = temp;
}


// //Function to delete element in heap.
int Delete(int arr[],int n)
{
  int i,j,val,temp;
  val = arr[1];
  arr[1] = arr[n];
  arr[n] = val;
  i = 1,j= i * 2;
  while(j<n-1)
  {
    if( arr[j+1] > arr[j] )
      j = j+1;
    if( arr[i] < arr[j] )
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i = j;
      j = 2*j;
    }
    else
      break;
  }
  
  return val;
}
};
