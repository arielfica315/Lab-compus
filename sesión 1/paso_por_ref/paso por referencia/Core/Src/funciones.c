int funcion_1(int x, int y){

	x = y;
	return x;
}
int funcion_2(int*x,int*y){

	*x = *y;
	return *x;
}
int funcion_3(int n[5]){
	int sum = 0;
	for(int i = 0; i<=4;i++){
		sum +=n[i];
	}
	return sum;
}
