// ??????
int merge_sort(int n, int left, int rigth){

    if(left == rigth){
        return 1;
    }else{
        merge_sort(n/2, 0, left);
        merge_sort(n/2, rigth, n);
    }

}