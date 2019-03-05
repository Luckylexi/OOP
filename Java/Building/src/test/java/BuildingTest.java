import org.junit.jupiter.api.*;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.AfterEach;

import static org.junit.jupiter.api.Assertions.*;

class BuildingTest {

        Building wbs;
        int floorsWbs = 3;
        int roomWbs = 20;
        int windowsproom = 4;


    @BeforeEach
    public void setUp() {
        this.wbs = new Building("Wubben Science Center", floorsWbs, roomWbs);
    }

    @AfterEach
    void tearDown() {
    }

    @Test
    void enterbuildingdoorsunlockedok() throws Exception{
        System.out.println("You can enter a building when the doors are unlocked");
        wbs.unlockDoors();
        wbs.enterbuilding();
    }

    @Test
    void enterbuildingdoorslockedbad() throws Exception {
        System.out.println("You can enter a building when the doors are unlocked");
        Assertions.assertThrows(BuildingErrorState.class, () -> {
            wbs.lockDoors();
            wbs.enterbuilding();
        });
    }

    @Test
    void totalrooms() {
        System.out.println("Testing the total number of rooms (totalrooms())");
        assertEquals(wbs.totalrooms(),(floorsWbs * roomWbs));
    }

    @Test
    void totalwindows() {
        System.out.println("The total number of windows in a building (totalwindows())");
        assertEquals(wbs.totalwindows(),(floorsWbs * roomWbs * windowsproom));
    }

    @Test
    void lockDoors() {
        System.out.println("Test door locks (lockDoors())");
        boolean expected = true;
        wbs.lockDoors();
        assertEquals(expected, wbs.getDoorState());
    }

    @Test
    void unlockDoors() {
        System.out.println("Test door unlocks (unlockDoors())");
        boolean expected = false;
        wbs.unlockDoors();
        assertEquals(expected, wbs.getDoorState());
    }

    @Test
    void get_name() {
        System.out.println("Test building name (get_name())");
        String name = "Wubben Science Center";
        assertEquals(name, wbs.get_name());
    }
}