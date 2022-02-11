//Transformation case 1

#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    cout<<"1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Shearing   "<<endl;
    cout<<"Selection:";
    cin>>s;
    switch(s)
        {
        case 1:
            {   int x1=300,y1=250,x2=400,y2=350;
                int tx=150,ty=150;
                cout<<"Rectangle before translation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                setcolor(4);
                cout<<"Rectangle after translation"<<endl;
                rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
                getch();
                break;
            }
        case 2:
            {     
			break;
}
        case 3:
            {  
			
			break;
}
        case 4:
            {    break;
}
        case 5:
        {
}
default:
          {
            cout<<"Invalid Selection"<<endl;
            break;
          }
        }
closegraph();
getch();
    return 0;
}

