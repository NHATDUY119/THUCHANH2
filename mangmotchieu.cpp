#include <stdio.h>
#include <conio.h>
#include <math.h>
 void xuatmang();
 void timmax();
 void tinhtich();
 void tongvademsnt();
 void timvitri(); 
 void sapxep();
 
 int a[10], n, i;

int main(){
	printf("nhap so phan tu cua manng : ");
	scanf("%d",&n);
	
	for(i=0; i<n ;i++){
	printf("nhap phan tu thu a[%d]: ",i);
	scanf("%d",&a[i]);	
	}
	
	xuatmang();
	timmax();
    tinhtich();
    tongvademsnt();
    timvitri();
    sapxep();
	}
	
	
		void xuatmang(){
			printf("\n mang vua nhap la:");
	for(i=0;i<n;i++){
	printf("%d, ",a[i]);	
	}	
		}
		
	void timmax(){
	int max, j=1;
	max=a[0];
	for(i=0;i<n-1;i++){
		if(a[j]>a[i]){
		  max=a[j];
	}
	j++;
	}
	printf("\n gia tri lon nhat la: %d",max );		
	}
	
	 void tinhtich(){
	 	int tich=1;
	 	for(i=0;i<n;i++)
	 	tich=tich*a[i];
	 	printf("\ntich cac gia tri la: %d",tich);
	 	}
void tongvademsnt(){
int dem=0, tong=0, j;
for(i=0;i<n;i++){
	for(j=2;j<=sqrt(a[i]);i++){
		if(a[i]%i==0){
			tong+=a[i];
			dem++;
		}
		}
	}
	printf("\n tong snt cua mang la: %d",tong);
	printf("\n trong mang co %d snt",dem);	
}	 

void timvitri(){
	int x;
	printf("\n nhap vao gia tri x:");
	scanf("%d",&x);
	printf("vi tri cac gia tri bang x la:");
	for(i=0;i<n;i++){
	if(x==a[i]){
	 printf("a[%d] ",i);
	}	
		}
	}
	
void sapxep(){
int tam;
for(i=0;i<n;i++){
	if(a[i+1]<a[i]){
	a[i]=a[i+1];	
		}
	}
	printf("mang sao khi sap xep la:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		}
}	
