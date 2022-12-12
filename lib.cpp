
#include "lib.h"
float max(float a[], int n) {
    float b=1;
for (int i=0; i<n; i++){
    if(a[i]>b){
        b=a[i];
    }
}
    return b;
}
