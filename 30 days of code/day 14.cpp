	// Add your code here
Difference(vector<int> elements){
    this->elements = elements;
}

 void computeDifference(){
    int n = elements.size();
    sort(elements.begin(), elements.end());
    maximumDifference = elements[n-1]-elements[0];
}
