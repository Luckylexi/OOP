
import org.junit.jupiter.api.*;


import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.function.Executable;

import static org.junit.jupiter.api.Assertions.*;

class MarkerTest {

    public MarkerTest() {
    }

    @BeforeAll
    public static void setUpClass() {
    }

    @AfterAll
    public static void tearDownClass() {
    }

    Marker blackMarker;
    Marker redMarker;

    @BeforeEach
    public void setUp() {
        blackMarker = new Marker(Color.BLACK);
        redMarker = new Marker(Color.RED);
    }

    @AfterEach
    public void tearDown() {
    }

    @Test
    void getColor() {
        System.out.println("getColor");
        assertEquals(Color.BLACK, blackMarker.getColor());
        assertEquals(Color.RED, redMarker.getColor());
    }

    @Test
    void setColor() {
        System.out.println("setColor");
        Color color = Color.GREEN;
        assertNotEquals(color, blackMarker.getColor());
        blackMarker.setColor(color);
        assertEquals(color,blackMarker.getColor());
    }

    @Test
    void isCapped() {
        System.out.println("isCapped");
        Marker instance = new Marker(Color.BLUE);
        boolean expResult = true;
        assertEquals(expResult, instance.isCapped());
        // TODO review the generated test code and remove the default call to fail
    }

    @Test
    void setCapped() {
        System.out.println("setCapped");
        boolean capped = true;
        Marker instance = blackMarker;
        instance.setCapped(capped);
        // TODO review the generated test code and remove the default call to fail.
        assertEquals(capped, instance.isCapped());
    }


    @Test
    void testDrawUncappedOk() throws Exception {
        System.out.println("drawUncappedOk");
        blackMarker.setCapped(false);
        blackMarker.draw();
    }

    @Test
    public void testDrawCappedBad() throws Exception{
        Assertions.assertThrows( BadMarkerState.class, () -> {
            System.out.println("drawCappedBad");
            blackMarker.setCapped(true);
            blackMarker.draw();});



    }}