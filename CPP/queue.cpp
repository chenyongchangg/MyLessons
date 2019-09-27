#include <iostream>

using namespace std;
struct node{
    node *next;
    node *last;
    int value;
};
struct queueu{
    node *f;
    node *l;
    int number;
    int getnumber(){
    cout<<number<<endl;
    return number;
    }
    bool push(int a){

        if(number==0){

        node * nw = new node;
        f=nw;
        l=nw;
        nw->value=a;
        number++;
       return 0;
        }

        node * nw = new node;
        nw->value=a;
        nw->next=l;
        l->last=nw;
        l=nw;
        number++;

    }
    int pop(){
        int a=f->value;
        f=f->last;
        number--;

        return a;

    }

    queueu(){
    number=0;

    }
};

int main()
{

 queueu *tem = new queueu();

 tem->push(1);
 tem->push(1);
 int n = 3;
 int loop=5;
 for(int p=0;p<=loop;p++){
        for(int i=0;i<n;i++){
            if(i==0) {cout<<int(tem->f->value)<<endl;tem->push(int(tem->f->value));continue;}
            if(i==n-1) {cout<<int(tem->f->value)<<endl;tem->push(int(tem->f->value));tem->pop();continue;}
            cout<<int(tem->f->value+tem->f->last->value)<<endl;

            tem->push(int(tem->f->value+tem->f->last->value));
             tem->pop();

         }
         n++;
 }



}
