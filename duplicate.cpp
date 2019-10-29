int i,n;
n=A.size();

map<int,int> M;

for(i=0;i<n;i++)
{
    M[A[i]]=0;
}

for(i=0;i<n;i++)
{
    if(M[A[i]]==1)
    {
        return A[i];
    }
    M[A[i]]=1;
}
