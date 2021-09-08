#include<iostream>
#include<string>
#define N 5
using namespace std;

class Stack{
private:
    int top=-1, array[N], var1, var2, peekval;
public:
    Stack(){
        top = -1;
        for (int i = 0; i < N; i++){
        array[i] = 0;
      }
    }
    bool isfull(){
        if(top>=(N-1)){
        return true;
        }
        else
        return false;
    }
    bool isempty(){
        if(top<=-1)
        return true;
        else 
        return false;
    }
    void push(){
        if(isfull()){
            cout<<"\nStack Full !!!\n";
        }
        else{
            top++;
            cout<<"\nEnter the value to push\n";
            cin>>array[top];
        }
    }
    void pop(){
        if(isempty()){
            cout<<"\nstack is empty\n";
        }
        else{
            array[top]=0;
            top--;
            cout<<"\npopped successfully\n";
        } 
    }
    void peek(){
        if(isempty()){
            cout<<"\nstack is empty\n";
        }
        else {
        cout<<"\nenter the index value\n";
        cin>>peekval;
        cout<<array[peekval]; 
        }
    }
    void view(){
        if(isempty()){
            cout<<"\nstack is empty\n\n";
        }
        else 
        for(int i = (N-1); i >= 0; i--){
        cout << array[i] << endl;
        }
    }
    void edit(){
        if(isempty()){
            cout<<"\nstack is empty\n";
        }
        else{
            cout<<"\nEnter the index value & changed value\n";
            cin>>var1>>var2;
            array[var1]=var2;
        }
    }
};
int main(){
    Stack obj;
    cout<<"Welcome to Stack Data Structure Program"<<endl;
    int choice;
    while(choice!=8){
    cout<<"Enter the serial number to select the operation"<<endl;
    cout<<"1. Push an element in stack\n";
    cout<<"2. Pop an element in stack\n";
    cout<<"3. Peek an element in the stack\n";
    cout<<"4. Check if stack is full\n";
    cout<<"5. Check if stack is empty\n";
    cout<<"6. View stack\n";
    cout<<"7. Edit an element\n";
    cout<<"8. Exit\n";
    cin>>choice;
    switch (choice){
    case 1:
        obj.push();
        break;
    case 2:
        obj.pop();
        break;
    case 3:
        obj.peek();
        break;
    case 4:
        obj.isfull();
        break;
    case 5:
        obj.isempty();
        break;
    case 6:
        obj.view();
        break;
    case 7:
        obj.edit();
        break;
    case 8:
        cout<<"Thank you for using the program\n";
        return 0;
        break;
    default:
        cout<<"Enter the S.No correctly\n";
        break;
    }
    }
    return 0;
}
