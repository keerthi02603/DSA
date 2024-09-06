/*max heap program B.chaithanya*/


#include<stdio.h>
void swap(int a[],int i,int max){
int l;
l=a[max];
a[max]=a[i];
a[i]=l;
}
void print(int a[],int n){
for(int i=0;i<n;i++){
printf("%d",a[i]);
}
}
void heapify(int a[],int n,int i){
int l,r;
l=2*i+1;
r=2*i+2;
int max=-1;
if(l<n){
max=l;
if(r<n){
if(a[l]<a[r])
max=r;
}
}
else{
if(r<n)
max=r;
}
if(a[i]<a[max]&&max!=-1){
swap(a,i,max);
heapify(a,n,max);
}

}
void main(){
int n;
printf("enter the number of elements you want to add");
scanf("%d",&n);
int a[n];int i;
for(i=0;i<n;i++){
printf("enter the number of elements");
scanf("%d",&a[i]);}
for(i=n/2;i>=0;i--)
heapify(a,n,i);
print(a,n);
}

