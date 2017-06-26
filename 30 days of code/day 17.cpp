//Write your code here


class Calculator{
    int n, p;
    public:
    Calculator(){
        this->n=n;
        this->p=p;
    }
    
    int power(int n, int p)  {
        if(n<0 || p<0){
            throw invalid_argument("n and p should be non-negative");
        }
        
        return pow(n, p);
    }
    
};
