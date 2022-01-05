class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        return (N*(N+1)*((N*2) +1))/6;
        // code here
    }
};
