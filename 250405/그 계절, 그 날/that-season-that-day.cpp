#include <iostream>

using namespace std;

int Y, M, D;
int Day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
bool Year(int Y){
    if(Y % 400 == 0 ){
        return 1;
    }
    else if(Y % 100 == 0 || Y % 4 != 0) return 0;
    else return 1;
}

string Season(int Y, int M, int D){
    M--;
    if(M == 1 && Year(Y)) Day[1] = 29;
    if(Day[M] < D) return "-1";
    else{
        M++;
        if(M >= 3 && M <=5) return "Spring";
        else if(M >= 6 && M <= 8) return "Summer";
        else if(M >= 9 && M <= 11) return "Fall";
        else return "Winter";
    }

}
int main() {
    cin >> Y >> M >> D;

    cout << Season(Y, M, D);
    // Please write your code here.

    return 0;
}