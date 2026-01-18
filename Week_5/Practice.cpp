using namespace std;

int main(){
    
    /* 
    for (initial action; loopcondition; action after each iteration)

    {

    statement(s);

    }
    */
    int sum =0;
    int i = 1;

    /* while (i < 15)
    {
        i+ = i;
        i++;
        cout << "This is i " << i << endl;
    }
    */
   /*
   do
   {
        cout << i << endl;
        i++;
    } while (i <=100);
     
    while (i <= 100){
    
        cout << i <<endl
        i++
        
    }
        
    for(i = 1; i <= 100; i++){
        cout << i <<endl;
    }*/
    
    for (i = 1; i<=2; i++){
        for(int j = 1; j<=3; j++){
            sum = sum + i + j;
        }
    }

    return 0;
}