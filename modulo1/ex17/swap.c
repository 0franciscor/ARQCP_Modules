void swap(int* vec1, int* vec2, int size){
    for (int i=0; i<size; i++){
        int aux = *(vec1+i);
        *(vec1+i)=*(vec2+i);
        *(vec2+i)=aux;
    }
}