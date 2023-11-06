class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
       sort(seats.begin(),seats.end());
       int s=0;
       sort(students.begin(),students.end());
       for(int i=0;i<seats.size();i++){
          s = s+abs(seats[i]-students[i]);
       } 
       return s;
    }
};