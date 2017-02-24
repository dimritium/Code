template<class T>
class vector
{
    T *v;
    int size;
public:
    vector(int m)
    {
        v=new T[size=m];
        for(int i=0;i<size;i++)
            v[i]=0;
    }
    vector(T* a)
    {
        for(int i=0;i<size;i++)
            v[i]=a[i];
    }
    T operator *(vector &y)
    {
        T sum=0;
        for(int i=0;i<size;i++)
            sum+=this->v[i]*y.v[i];
        return sum;
    }
};
z
