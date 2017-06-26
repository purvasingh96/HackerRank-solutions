class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        // Write your constructor here
    Student(string firstName, string lastName, int id, vector<int> testScores):Person(firstName, lastName, id){
          //Super(firstName,lastName,id);
           this->testScores=testScores;
    }
    /*	
    *   Method Name: calculate
    *   @return A character denoting the grade.
    */
    // Write your method here
     char calculate(){
        int sum=0,avg; 
        for(int i=0;i<testScores.size();i++){
            sum+=testScores[i];
        }
        avg=sum/testScores.size();
        if(avg<=100 && avg>=90){
            return 'O';
        }else if(avg<90 && avg>=80){
            return 'E';
        }else if(avg<80 && avg>=70){
            return 'A';
        }else if(avg<70 && avg>=55){
            return 'P';
        }else if(avg<55 && avg>=40){
            return 'D';
        }else{
            return 'T';
        }
        
    }
};
