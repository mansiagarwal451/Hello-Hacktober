int i,j,temp;
    
while(A>0)
{
    temp=B;
    B=A;
    A=temp%A;
}
return B;
