#include <iostream>
using namespace std;

void sortnum( int& one, int& two, int& three ) {
    if ( one > two && one > three ) {
        if ( two > three ) {
                       
        } else {
            int temp = three;
            three = two;
            two = temp;
        }
    } else if ( two > one && two > three ) {
        int temp = one;
        one = two;
        two = temp;
        if ( two > three ) {
            
        } else {
            int temp = two;
            two = three;
            three = temp;
        }
    } else if ( three > one && three > two ) {
        int temp = one;
        one = three;
        three = temp;
        if ( two > three ) {
        
        } else {
            int temp = three;
            three = two;
            two = temp;
        }
    }
}

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

    sortnum(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
