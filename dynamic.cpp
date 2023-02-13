#include<iostream>
using namespace std;
int main(){
    int *ptr=new(nothrow) int[11];
    if(!ptr){
        cout<<"failed mermoy allocation"<<endl;
    }
    else{
        for(int i=0;i<ptr[11];i++)
        {
            ptr[i]=i+1;
        }
    }
    for(int i=0;i<ptr[11];i++)
        {
            cout<<ptr[i]<<" ";
        }

    delete [] ptr;
    return 0;

}