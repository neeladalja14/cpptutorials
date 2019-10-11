#include <iostream>
using namespace std;

int main(){
    // multidimentional arraay is created for animals. it has structure like 2x3
    int animal[2][3]= {{2,3,4},
                          {6,7,8}
    };

    //the first loop is actually going through no of rows. if we change the values, the difference can be seen.
    for(int i=0; i<2; i++){
        //the second loop goes through the elements inside the two arraays. if we hange thee value to 2, then it will rint two elements of both row 1 and 2.
        for(int j=0; j<3;j++){
            animal[i][j] *= 2;
            cout << animal[i][j] <<" "<< flush;
        }
        cout<<endl;
    }
}