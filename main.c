#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) { 
   int temp,temp1,temp2;
  
for (int index=1;index<n;index++){
for (int jndex=index+1;jndex<=n;jndex++ ){
 if ((index & jndex) < k ){
 
    if (temp <(index & jndex)){
           temp=index & jndex;}
           }
if ((index | jndex) <k){
if (temp1 <(index | jndex)){
           temp1=index | jndex;}

}
if ((index ^ jndex) <k){
if (temp2 < (index ^ jndex)){
           temp2=index ^ jndex;}
}}}
printf("%d\n",temp);
printf("%d\n",temp1);
printf("%d",temp2);


}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
