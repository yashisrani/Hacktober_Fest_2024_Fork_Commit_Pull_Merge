using namespace std;
#include <iostream>
#include <climits>

class ARRAY{
	public:
		int size;
		int *arr;
		int length;
	ARRAY(){
		cout << "Enter the largest size of arr";
		cin >> size;
		arr = new int[size];
		length = 0;
	}
	ARRAY(int x){
		size = x; 
		arr = new int[size];
		length = 0;
	}
	
	void display(){
		for(int i = 0; i < length; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	};
	
	void add(int x){
		if (length >= size){		
			cout << "Array is overflowing" << endl;
		}
		else{
			arr[length] = x;
			length++;
		}
	};
	
	void insert(int x,int idx){
		if(idx > length){
			cout << "Out of Bounds"<< endl;
		}
		else{
			for(int i = length; i >= idx; i--){
				arr[i] = arr[i-1];
			}
			arr[idx] = x;
			length++;
		}
	}
	
	void sortInsert(int x){
		int i = length-1;
		while(x <= arr[i] ){
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = x;
		length++;		
	}
	
	void remove(int idx){
		for(int i = idx; i < length; i++){
			arr[i] = arr[i+1];
		}
		length--;
	};
	
	int isSorted(){
		for(int i =0; i < length-1; i++){
			if(arr[i] > arr[i+1])
				return 0;
		}
		return 1;
	}
	
	int get(int idx){
		if (idx > length){
			cout << "Out of Index";
			return -1;
			}
		else{
			return arr[idx];
			}
	}
	
	void set(int idx, int x){
		if (idx > length){
			cout << "Out of Index";
			}
		else{
			 arr[idx] = x;
			}
	}
	
	int max(){
		int max = INT_MIN;
		for(int i = 0 ; i < length; i++){
			if (arr[i] > max){
				max = arr[i];
			}
		}
		return max;
	}
	
	int min(){
		int min = INT_MAX;
		for(int i = 0 ; i < length; i++){
			if (arr[i] < min){
				min = arr[i];
			}
		}
		return min;
	}
	
	void reverse(){
		for(int i = 0; i < length/2; i++){
			int temp = arr[length-1-i];
			arr[length-1-i] = arr[i];
			arr[i] = temp;
		} 
	}
	
	float average(){
		float average = (float)this->sum()/length;
		return average;
	}
	
	int search(int key){
		for(int i = 0; i < length; i++){
			if(arr[i] == key){
				return i;
			}
		}
		return -1;
	}
	
	void lshift(){
		for(int i = 0; i < length-1; i++){
			arr[i] = arr[i+1];
		}
		arr[length-1] = 0;
	}
	
	void lrotate(){
		int temp = arr[0];
		for(int i = 0; i < length-1; i++){
			arr[i] = arr[i+1];
		}
		arr[length-1] = temp;
	}
	
	int rbsearch(int key, int low, int high){
		int mid = (low+high)/2;
		if(low<=high){
			if (arr[mid] == key)
				return mid;
			else if(arr[mid] < key){
					return rbsearch(key,mid+1,high);
				}
			else{
				return rbsearch(key,low,mid-1);
				}
		}
		return -1;
	}
	
	int bsearch(int key){
		int mid,low = 0, high = length;
		while (low<=high){
			mid = (low+high)/2;
			if (arr[mid] == key){
				return mid;
				}
			else if(arr[mid] < key){
				low = mid+1;
			}
			else{
				high = mid-1;
				}
		}
		return -1;
	
	}
	
	int sum(){
		int sum =0;
		for(int i =0; i < length;i++){
			sum += arr[i];
		}
		return sum;
	}
	
	int rsum(int A,int n){
		if (n < 0){
			return 0;
		}
		else{
			return arr[n] + rsum(A,n-1);
		}
	}
	
	int in(int x){
		for(int i = 0; i < length; i++){
			if(arr[i] == x){
				return 1;
			}
		}
		return -1;
	}
	
	void sort(){
		for(int i = 0; i < length; i++){
			for(int j = 0; j < length-1;j++){
				if(arr[j] > arr[j+1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	
	void negatives(){
		int low = 0, high = length;
		while(low < high){
			if(arr[low] < 0){
				low++;
				
			}
			if(arr[high] >= 0){
				high--;
				
			}
			if(arr[high] < 0){
				int temp = arr[high];
				arr[high] = arr[low];
				arr[low] = temp;
				
				low++;				
				high--;
			}
		}		
	}
	
	ARRAY merge(ARRAY b){
		int i=0,j=0;
		ARRAY C(length+b.length);
		while(i < length && j < b.length){
			if(arr[i] < b.get(j)){
				C.add(arr[i++]);
			}
			else{
				C.add(b.get(j++));
			}
		}
		for(;i<length;i++){
			C.add(arr[i]);
		}
		for(;j<b.length;j++){
			C.add(arr[j]);
		}
		return C;
	}
	
	ARRAY join(ARRAY b){
		int i=0,j=0;
		ARRAY c(length+b.length);
		while(i <= length && j <= b.length){
			if(arr[i] == b.get(j))
				c.add(arr[i]);
			else{
				c.add(arr[i]);
				c.add(b.get(j));
			}
			i++;
			j++;
		}
		return c;
	}
	
	ARRAY intersection(ARRAY b){
		int i=0,j=0;
		ARRAY c(length+b.length);
		while(i <= length && j <= b.length){
			if(arr[i] == b.get(j)){
				c.add(arr[i]);
			}

			i++;
			j++;
		}
		return c;
	}
	ARRAY difference(ARRAY b){
		int i=0,j=0;
		ARRAY c(length+b.length);
		while(i <= length && j <= b.length){
			if(arr[i] != b.get(j)){
				c.add(arr[i]);
				c.add(b.get(j));
			}

			i++;
			j++;
		}
		return c;
	}
	
};



int main(){
	ARRAY a(15),b(15);
	a.add(50);
	a.add(10);
	a.add(15);
	a.add(5);
	a.add(10);
	a.add(15);
	a.add(5);
	a.add(10);
	a.add(15);
	a.add(5);
	a.add(10);
	a.add(1);
	a.add(-5);
	a.add(1);
	a.insert(69,5);
	
	ARRAY c = a.merge(b);
	
	
}