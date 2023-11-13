int rowWithMax1s(bool a[R][C]) {
    int ind = -1 ;
    int max = 0 ;
    for(int i = 0 ; i < R ; i++)
    {
        int count = 0 ;
        for(int j = 0 ; j < C ; j++ )
        {
            if(a[i][j] == 1)
            {
                count++ ;
            }
        }
        if(count > max)
        {
            max = count ;
            ind = i ;
        }
    }
    return rowIndex ;
}
