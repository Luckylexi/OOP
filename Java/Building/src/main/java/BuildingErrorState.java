public class BuildingErrorState extends Exception{
    private String _problem;
    BuildingErrorState(String problem){
        this._problem = problem;
    }

    public String get_problem(){return this._problem;}
    public void set_problem(String problem){ this._problem = problem; }
}
