#include <iostream>
using namespace std;

struct node{
    int x;
    node* next;

};
class Table{
public:
    node *Head = new node();
    int len;

    void add(int value){
        node* Next = new node();
        Next->x = value;
        Next->next = Head;
        Head = Next;
        len++;

    }
    void  inser(int value,int posi){
        node *tem;
        tem  = Head;
        node *last;
        for(int i=0;i<posi-1;i++){//pos back
            tem = tem->next;//error

        }
        last = tem->next;
        node *insObj = new node();
        insObj->next = last;
        tem->next = insObj;
        insObj->x = value;//error
        len++;
      //  Head = insObj;

    }
    void dele(int posi){
        node *tem = Head;
        node *font ;
        for(int i=0;i<posi;i++){
            font= tem;
            tem = tem->next;

        }
       font->next = tem->next;
        delete tem;
        len--;
    }
    int printall(){
        for(int i = 0;i<len;i++){
            cout<<Head->x<<endl;
            Head = Head->next;


        }
        return  1;
    }
    int sear(int value){
        node *tem = Head;
        int i;
        for( i=0;i<len;i++){

            cout<<"tem-x:"<<tem->x<<endl;
            cout<<"value:"<<value<<endl;
            if(tem->x==value){

                 break;

            }

            else tem=tem->next;
        }
       return i;
    }
    Table(){
        Head->next =NULL;
        len = 0;
    }
};
int main() {

    Table table ;
    cout<<"请输入数据个数"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tem;
        cin>>tem;
        table.add(tem);

    }
//输入的表示之后的值
    cout<<"请输入插入数值和位置"<<endl;
    int value,posi;
    cin>>value>>posi;
    table.inser(value,posi);


    cout<<"请输入删除的位置"<<endl;
    cin>>posi;
    table.dele(posi);

    cout<<"请输入搜索的值"<<endl;
    cin>>value;
    table.sear(value);

    cout<<"输出所有的值"<<endl;
    table.printall();


}