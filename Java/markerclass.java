package.github.luckylexi.marker

public class Marker {
    Color color;
    boolean capped;
    static public BadMarkerSTate Bad_Marker_Capped_Draw = new BadMarkerSTate("drawing with capped marker is bad");

    public Marker(Color color) {
        this.color = color;
    }


    public void setColor(Color color) {
        this.color = color;
    }

    public void setCapped(boolean capped) {
        this.capped = capped;
    }

    public Color getColor() {
        return color;
    }

    public boolean isCapped() {
        return capped;
    }


    public void draw() throws BadMarkerSTate {
        if (!isCapped()) {
            System.out.println("Drawing in" + getColor());
        } else {
            throw Marker.Bad_Marker_Capped_Draw;
        }
    }
}