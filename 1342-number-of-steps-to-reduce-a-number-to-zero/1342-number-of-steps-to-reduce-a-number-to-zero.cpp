class Solution {
public:
  int numberOfSteps(int num){
    int steps = 0; //for count steps
    
    while(num>0) {
        if((num & 1) == 0) { //if num is even
            num >>= 1;       //then divide by 2
        } else {
            num--;           //subtract 1
        }
        steps++;             //count total stpes
    }
    return steps;            //return steps
}
};