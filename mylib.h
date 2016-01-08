// mylib.h 

double *d1vector(int n)
{
    double *pvec;
    pvec = (double *) malloc(n * sizeof(double));
    if (pvec == NULL)
    {
        puts("Error!");
        return NULL;
    }
    return pvec - 1;
}

double **d1matrix(int row, int col)
{
    int i;
    double **pmat, **tmp;
    
    pmat = (double **) malloc(row * sizeof(double *));
    if (pmat == NULL)   
    {
        puts("Error!");
        return NULL;
    }
    tmp = pmat;
    for(i = 0; i < row; i++)
    {
        tmp[i] = (double *) malloc(col * sizeof(double));
        if (tmp[i] == NULL)
        {
            puts("Error!");
            return NULL;
        }
        tmp[i] -= 1;
    }

    return pmat -1;    
}

void free_d1vec(double *vec)
{
    vec += 1;
    if(vec != NULL)
    {
        free(vec);
        vec = NULL;
    }
}

void free_d1mat(double **mat)
{
    int i, row;
    double **tmp;
    tmp = ++mat;
    row = sizeof(mat) / sizeof(double *);
    
    if(mat != NULL)
    {
        for(i = 0; i < row; i++)    // free  mat[i][1] ~ [i][col]
        {
            tmp[i] += 1;
            if(tmp[i] != NULL)
            {
                free(tmp[i]);
                tmp[i] = NULL;
            }
        }
        free(mat);      // free mat[1][0] ~ [row][0]
        mat = NULL;
    }
}

double* addrow(double *vec, int n)
{
    size_t newvec_row;
    int i, row;
    double *newvector;

    if(++vec == NULL) { return NULL; }
    row = sizeof(vec) / sizeof(double);
    newvec_row = row + n;

    newvector = (double*) realloc(vec, newvec_row);
    free(vec);
    vec = NULL;

    return newvector -1;
}
    




}

    
