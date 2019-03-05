public class BadMarkerState extends Exception {
    private String problem;
    BadMarkerState(String problem) {
        this.problem = problem;
    }

    public String getProblem() {
        return problem;
    }

    public void setProblem(String problem) {
        this.problem = problem;
    }
}
