class NumMatrix {
    private final int[][] ps;
    public NumMatrix(int[][] matrix) {
        int n = matrix.length;
        if (n == 0) { ps = new int[0][]; return; }
        int m = matrix[0].length;
        ps = new int[n][m + 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ps[i][j + 1] = ps[i][j] + matrix[i][j];
            }
        }
    }
    
    public int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for (int r = row1; r <= row2; r++) {
            sum += ps[r][col2 + 1] - ps[r][col1];
        }
        return sum;
    }
}

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */