#include <iostream>

using namespace std;
struct node{
    node *next;
    node *last;
    char value;
};
struct stack{
    stack(){
    number=0;
    }
    node *now;
    int number;
    node *top;
    bool isempty(){
        if(number==0) return 1;
        else return 0;

    }
    bool pop(){

         now=now->next;
         number--;


    }
    bool push(char a){

        if(number==0){
        node *nw = new node;
        nw->value=a;
        number++;
        nw->next=now;
        now=nw;
        top = nw;
         cout<<now->value<<endl;
        return 1;
        }
        node *nw = new node;
        nw->value=a;
        number++;
        nw->next=now;
        now=nw;
         cout<<now->value<<endl;

    }
    char gettop(){
      cout<<top->value<<endl;
    }
    int getnumber(){
        cout<<number<<endl;
    }
};

int main()
{
    stack *sta = new stack();
    char test[10] = {'(','(','(','(','(',')',')',')',')',')'};
    for(int i=0;i<=10;i++){

            if(i==0) { sta->push(test[i]);continue;}
            if(test[i]==')'&&sta->now->value=='('){cout<<"匹配第"<<i<<"个"<<endl;continue;}
            sta->push(test[i]);

    }
    cout<<"匹配完毕"<<endl;

}
