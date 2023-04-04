int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    heapSort(arr, n); 
  
    cout << "mảng được sắp xếp là: \n"; 
    printArray(arr, n); 
} 
màn hình xuất ra 5,6,7,11,12,13