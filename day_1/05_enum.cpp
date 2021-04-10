#include<iostream>
using namespace std;

enum weekday
{
 s = 0,m,t,w,thu,f,s1
};

int main(int argc, char const *argv[])
{
    enum weekday wek=s;
    // weekday wek=s;
    for(int i=wek;i!=f;i++)
    {
        cout<<i<<endl;
        cout<<i+s<<endl;
        cout<<"-------end------"<<endl;
    }
    system("pause");
    return 0;
}

// enum camera_mem_cb_type{
//     CAMERA_PREVIEW=0,
//     CMAERA_SNAPSHOT,
//     CAMERA_VIDEO,
//     CAMERA_STATIS,
//     CAMERA_MEM_MAX,
// }mem;

 
// int main(){
//     enum camera_mem_cb_type mem;
//     for(mem=CAMERA_PREVIEW;mem<=CAMERA_MEM_MAX;mem=(camera_mem_cb_type)(mem+1))
//         std::cout<<mem<<std::endl;
// }