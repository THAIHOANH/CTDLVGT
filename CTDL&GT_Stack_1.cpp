//https://blog.luyencode.net/ngan-xep-stack/
#include <stdio.h>

int top = -1;

bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}

bool IsEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nNgăn xếp đã đầy. Tình trạng tràn!!");
    }else{
        ++top;
        stack[top] = value;
    }
}

void Pop(){
    if(IsEmpty() == true){
        printf("\Ngăn xếp trống. Tình trạng chảy tràn!");
    }else{
        --top;
    }
}


int Top(int stack[]){
    return stack[top];
}

int Size(){
    return top + 1;
}

int main(){
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];
    
    // đẩy phần tử 5 vào ngăn xếp.
    Push(stack, 5, capacity); 
    
    printf("\nKích thước hiện tại của ngăn xếp là %d", Size());
    
    Push(stack, 10, capacity);
    Push(stack, 24, capacity);
    
    printf("\nKích thước hiện tại của ngăn xếp là %d", Size());
    
    // Khi ngăn xếp đầy, việc đẩy thêm sẽ hiển thị tình trạng tràn.
    Push(stack, 12, capacity); 
    
    //Truy cập phần tử trên cùng
    printf("\nPhần tử hàng đầu hiện tại trong ngăn xếp là  %d", Top(stack));
    
    //Xóa tất cả các phần tử khỏi ngăn xếp
    for(int i = 0 ; i < 3;i++)
        Pop();
    printf("\nKích thước hiện tại của ngăn xếp là %d", Size());
    
    //Khi ngăn xếp trống, việc bật thêm sẽ hiển thị tình trạng tràn.
    Pop();  
}